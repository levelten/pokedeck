<?php

/**
 * @file
 * Migration data for Pokemon Characters.
 * TODO: db_change_field() for sourceid int -> varchar
 */

class PokedexV2NodeMigration extends Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->description = t('Import Pokedex_v2 JSON');

    $fields = array(
      'Number' => 'Pokemon index field',
      'Name' => 'Pokemon name field',
      'Generation' => 'Pokemon generation field',
      'About' => 'Pokemon about field',
      'img' => 'image field',
      'Types' => 'types field',
      'Resistant' => 'resistant field',
      'Height' => 'height field',
      'Weight' => 'weight field',
      'Weaknesses' => 'weaknesses field',
      'Next evolution(s)' => 'next evolution field',
      'Previous evolution(s)' => 'prev evolution field',
      'Buddy Distance' => 'Distance for pokemon buddy status',
      'Base Stamina' => 'Pokemon base stamina stats',
      'Base Attack' => 'Pokemon base attack stats',
      'Base Defense' => 'Pokemon base defensive stats',
      'Base Flee Rate' => 'Pokemon chance of fleeing',
      'MaxCP' => 'Pokemon max combat points',
      'MaxHP' => 'Pokemon max health points',
      'Buddy Size' => 'Pokemon buddy size',
      'Fast Attack(s)' => 'Quick attack field',
      'Special Attack(s)' => 'Charge attack field',
      'Next Evolution Requirements' => 'Candy requirements field',
    );

    $json_url = 'https://gist.githubusercontent.com/bar0191/fae6084225b608f25e98b733864a102b/raw/dea83ea9cf4a8a6022bfc89a8ae8df5ab05b6dcc/pokemon.json';

      // MigrateSourceJSON instead of SQL
    $this->source = new MigrateSourceJSON($json_url, 'Number', $fields);

    // Create destination object.
    $this->destination = new MigrateDestinationNode('pokemon');

    // Create map object.
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'Name' => array(
          'type' => 'varchar',
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Set up field mappings.
    $this->addFieldMapping('title', 'Name');

    // Pokemon Stats
    $this->addFieldMapping('field_attack', 'Base Attack');
    $this->addFieldMapping('field_stamina', 'Base Stamina');
    $this->addFieldMapping('field_defense', 'Base Defense');
    $this->addFieldMapping('field_max_cp', 'MaxCP');
    $this->addFieldMapping('field_max_hp', 'MaxHP');
    $this->addFieldMapping('field_flee_rate', 'Base Flee Rate');
    $this->addFieldMapping('field_buddy_dist', 'Buddy Distance');

    // set up description field
    $this->addFieldMapping('field_description', 'About');
    $this->addFieldMapping('field_description:format')->defaultValue('plain_text');

    // Pokemon type
    $this->addFieldMapping('field_type', 'Types');
    $this->addFieldMapping('field_type:source_type')->defaultValue('Name');
    $this->addFieldMapping('field_type:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_type:ignore_case')->defaultValue(TRUE);

    // Pokemon buddy size
    $this->addFieldMapping('field_buddy_size', 'Buddy Size');
    $this->addFieldMapping('field_buddy_size:source_type')->defaultValue('Name');
    $this->addFieldMapping('field_buddy_size:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_buddy_size:ignore_case')->defaultValue(TRUE);

    // Pokemon Generation
    $this->addFieldMapping('field_generation', 'Generation');
    $this->addFieldMapping('field_generation:source_type')->defaultValue('Name');
    $this->addFieldMapping('field_generation:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_generation:ignore_case')->defaultValue(TRUE);

    // Pokemon Resistant
    $this->addFieldMapping('field_resistant', 'Resistant');
    $this->addFieldMapping('field_resistant:source_type')->defaultValue('Name');
    $this->addFieldMapping('field_resistant:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_resistant:ignore_case')->defaultValue(TRUE);

    // pokemon weaknesses
    $this->addFieldMapping('field_weakness', 'Weaknesses');
    $this->addFieldMapping('field_weakness:source_type')->defaultValue('Name');
    $this->addFieldMapping('field_weakness:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_weakness:ignore_case')->defaultValue(TRUE);

    // pokemon height and weight
    $this->addFieldMapping('field_height', 'Height');
    $this->addFieldMapping('field_weight', 'Weight');

    // Pokemon Image
    $this->addFieldMapping('field_img', 'img');
    $this->addFieldMapping('field_img:file_class')->defaultValue('MigrateFileUri');
    $this->addFieldMapping('field_img:preserve_files')->defaultValue(FALSE);
    $this->addFieldMapping('field_img:file_replace')->defaultValue('FILE_EXISTS_RENAME');
    $this->addFieldMapping('field_img:source_dir')->defaultValue(NULL);
    $this->addFieldMapping('field_img:urlencode')->defaultValue(0);
    $this->addFieldMapping('field_img:alt')->defaultValue('#');
    $this->addFieldMapping('field_img:title')->defaultValue('Pokemon');

    // pokemon number
    $this->addFieldMapping('field_number', 'Number');

    //pokemon candy req
    $this->addFieldMapping('field_candy_to_evolve', 'Next Evolution Requirements');

    // Entity reference to Entry type (evolutions)
    $this->addFieldMapping('field_evolutions', 'Next evolution(s)')
      ->sourceMigration(array('PokemonNodes'));
    $this->addFieldMapping('field_prev_evolutions', 'Previous evolution(s)')
      ->sourceMigration(array('PokemonNodes'));
    $this->addFieldMapping('field_quick_move', 'Fast Attack(s)')
      ->sourceMigration(array('PokemonMoveNodes'));
    $this->addFieldMapping('field_charge_move', 'Special Attack(s)')
      ->sourceMigration(array('PokemonMoveNodes'));

    // Keeping around for node comments.
    $this->addFieldMapping('log')->defaultValue('Imported by Pokemon: Node migration');

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
        'comment',
        'translate',
        'is_new',
        'field_img:destination_dir',
        'field_img:destination_file',
        'field_description:summary'
    ));
  }

  function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->Weight = ($row->Weight->Minimum + $row->Weight->Maximum)/2;
    $row->Height = ($row->Height->Minimum + $row->Height->Maximum)/2;

    if (preg_match('!\(([^\)]+)\)!', $row->{'Buddy Distance'}, $match)) {
      $row->{'Buddy Size'} = $match[1];
    }

    $row->{'Buddy Distance'} =
      (int) strstr($row->{'Buddy Distance'}, 'km', true) ?: $row->{'Buddy Distance'};
    $row->{'Base Stamina'} =
      (int) strstr($row->{'Base Stamina'}, ' stamina', true) ?: $row->{'Base Stamina'};
    $row->{'Base Attack'} =
      (int) strstr($row->{'Base Attack'}, ' attack', true) ?: $row->{'Base Attack'};
    $row->{'Base Defense'} =
      (int) strstr($row->{'Base Defense'}, ' defense', true) ?: $row->{'Base Defense'};
    $row->{'Base Flee Rate'} =
      strstr($row->{'Base Flee Rate'}, ' chance', true) ?: $row->{'Base Flee Rate'};


    for ($i = 0; $i < count($row->{'Next evolution(s)'}); $i++) {
      $row->{'Next evolution(s)'}[$i] =
        json_decode(json_encode($row->{'Next evolution(s)'}[$i]->Name), True);
    }

    for ($i = 0; $i < count($row->{'Previous evolution(s)'}); $i++) {
      $row->{'Previous evolution(s)'}[$i] =
        json_decode(json_encode($row->{'Previous evolution(s)'}[$i]->Name), True);
    }

    for ($i = 0; $i < count($row->{'Fast Attack(s)'}); $i++) {
      $row->{'Fast Attack(s)'}[$i] =
        json_decode(json_encode($row->{'Fast Attack(s)'}[$i]->name), True);
      $row->{'Fast Attack(s)'}[$i] =
        strstr($row->{'Fast Attack(s)'}[$i], ' Fast', true) ?: $row->{'Fast Attack(s)'}[$i];
    }

    for ($i = 0; $i < count($row->{'Special Attack(s)'}); $i++) {
      $row->{'Special Attack(s)'}[$i] =
        json_decode(json_encode($row->{'Special Attack(s)'}[$i]->name), True);
    }

    $row->{'Next Evolution Requirements'} = $row->{'Next Evolution Requirements'}->Amount;
  }

  // if you are trying to reference something that hasnt been created; dummy node until the referenced node is created
  protected function createStub(Migration $migration, array $source_id) {
    $node = new stdClass();
    $node->title = t('Stub for pokemon @id', array('@id' => $source_id[0]));
    $node->type = 'pokemon';
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }
}
