<?php

/**
 * @file
 * Migration data for types.
 */

class SilmFEEntryMigration extends SilmFEMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->description = t('Import entries from FE Glossary database.');

    // Add term dependencies first.
    $this->addHardDependencies(array('SilmTypesNote', 'SilmTypesAbr', 'SilmTypesDo', 'SilmTypesDom', 'SilmTypesMaj', 'SilmTypesMin', 'SilmTypesNoun', 'SilmTypesPos', 'SilmTypesRel', 'SilmTypesSub'));

    // Create a source object.
    $query = $this->getConnection()->select('entry', 'e')
      ->fields('e');
    $query->addJoin('left', 'type', 't', 'e.EntryType = t.Type');

    $this->source = new MigrateSourceSQL($query);

    // Create destination object.
    $this->destination = new MigrateDestinationNode('entry');

    // Create map object.
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'EntryId' => array(
          'type' => 'int',
          'length' => 11,
          'unsigned' => FALSE,
          'not null' => TRUE,
          'description' => t('Entry ID'),
          'alias' => 'e',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Set up field mappings.
    $this->addFieldMapping('title', 'Base');
    $this->addFieldMapping('field_entry_lang', 'Lang');
    $this->addFieldMapping('field_entry_homonym', 'homonymber')
      ->description(t('This will use a weight field to sort the homonyms.'));
    $this->addFieldMapping('field_entry_borrow', 'borrow_bool')
      ->description(t('Converting from True/False string to true boolean.'));
    $this->addFieldMapping('field_quality', 'quality')
      ->description(t('Adding extra field processing to create one single quality select field.'));
    $this->addFieldMapping('field_id', 'entryID');

    $this->addFieldMapping('field_entry_domain', 'domain')
      ->description(t('Assign domains to entry instead of having another content type.'));
    $this->addFieldMapping('field_entry_domain:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_entry_domain:create_term')
      ->defaultValue(FALSE);
    $this->addFieldMapping('field_entry_domain:ignore_case')
      ->defaultValue(TRUE);

    // Map type.
    $this->addFieldMapping('field_entry_type', 'type_id')
      ->description(t('After terms import, this will assign the new Term ID of the newly created type.'));

    // Entity reference to Entry type
    $this->addFieldMapping('field_entryid', 'Parent')
      ->sourceMigration(array('SilmEntry'));

    // Keeping around for node comments.
    $this->addFieldMapping('log')->defaultValue('Imported by Entry migration');

    // Set default values for nodes.
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);

    // Ignore fields.
    $this->addUnmigratedDestinations(array(
      'created',
      'changed',
      'promote',
      'sticky',
      'revision',
      'language',
      'tnid',
      'revision_uid',
      'path',
      'pathauto',
      'comment',
      'translate',
      'is_new'
    ));
    // Ignore fields.
    $this->addUnmigratedSources(array('Homonym', 'EntryType', 'Borrow', 'Sort', 'Quality12', 'Quality3', 'Quality4'));
  }

  function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Prepare quality field.
    if ($row->Quality12 == 'True') {
      $row->quality = 1;
    } elseif ($row->Quality3 == 'True') {
      $row->quality = 2;
    } elseif ($row->Quality4 == 'True') {
      $row->quality = 3;
    } else {
      $row->quality = 1;
    }

    // Set up borrow field.
    $row->borrow_bool = 1;
    if ($row->Borrow == 'False') {
      $row->borrow_bool = 0;
    }

    // Attempt to fetch term.
    $terms = $this->fetchTerms();
    $row->type_id = [];
    if (isset($terms[$row->id])) {
      $row->type_id[] = $terms[$row->id]['tid'];
    }

    // Assign domain term.
    $domain = [];
    $domains = $this->fetchDomains();
    foreach ($domains as $dom) {
      if ($dom['EntryId'] == $row->EntryId) {
        foreach ($terms as $term) {
          if ($term['vocab'] == 'domain' && $term['name'] == $dom['Dom']) {
            $domain[] = $term['tid'];
          }
        }
      }
    }
    $row->domain = $domain;

    // Cast homonym to int.
    if (!empty($row->Homonym)) {
      $row->homonymber = (int) $row->Homonym;
    } else {
      $row->homonymber = 0;
    }
  }

  protected function fetchTerms() {
    // Cache to only run this once.
    $fetch_static = drupal_static($this->machineName .'_'.__FUNCTION__);
    if (!isset($fetch_static)) {
      $fetch_terms = cache_get('silm_feglossary_fetchtype');
      if (empty($fetch_terms->data)) {
        $all_terms = [];
        $vocabularies = taxonomy_get_vocabularies();

        foreach ($vocabularies as $v) {
          $vocabulary = taxonomy_vocabulary_machine_name_load($v->machine_name);
          $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));

          foreach ($terms as $term) {
            $all_terms[$term->field_type_id['und'][0]['value']] = [
              'tid' => $term->tid,
              'name' => $term->name,
              'vocab' => $term->vocabulary_machine_name,
            ];
          }
        }

        cache_set('silm_feglossary_fetchtype', $all_terms);
        $fetch_terms = cache_get('silm_feglossary_fetchtype');
      }
      $fetch_static = $fetch_terms->data;
    }
    return $fetch_static;
  }

  protected function fetchDomains() {
    // Cache to only run this once.
    $domains = cache_get('silm_feglossary_fetchdomain');

    // Create or fetch domain data.
    if (empty($domains->data)) {
      $domain = [];
      // Fetch all domain records.
      $result = Database::getConnection('default', 'fe_glossary')->select('dom', 'd')->fields('d')->execute();
      while ($records = $result->fetchAssoc()) {
        $domain[$records['ID']] = $records;
      }

      cache_set('silm_feglossary_fetchdomain', $domain);
      $domains = cache_get('silm_feglossary_fetchdomain');
    }
    return $domains->data;
  }

  protected function createStub(Migration $migration, array $source_id) {
    $node = new stdClass();
    $node->title = t('Stub for entry @id', array('@id' => $source_id[0]));
    $node->type = 'entry';
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }
}
