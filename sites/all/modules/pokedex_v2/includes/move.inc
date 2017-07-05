<?php

/**
 * @file
 * Migration data for Pokemon: Moves
 * TODO: db_change_field() for sourceid int -> varchar
 */



class PokedexV2MoveNodeMigration extends Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->description = t('Import Pokedex_v2 Moves - JSON');

    $fields = array(
      'id' => 'Pokemon index field',
      'name' => 'Pokemon name field',
      'Move Type' => 'Pokemon move type field',
      'power' => 'Move power type field',
      'energyDelta' => 'Energy needed field',
      'criticalChance' => 'Critical Chance field',
      'durationMs' => 'Cooldown field',
      'DPS' => 'Damage Per Second field',
      'pokemonType' => 'Pokemon type reference field'
    );

    $json_url = 'https://gist.githubusercontent.com/bar0191/b4ebf0a77b644292daa6ba7f64dfa130/raw/01250e8a2a4c9fc474f2b9ded492158ded154ef2/moves.json';

    // MigrateSourceJSON instead of SQL
    $this->source = new MigrateSourceJSON($json_url, 'id', $fields);

    // Create destination object.
    $this->destination = new MigrateDestinationNode('pokemon_move');

    // Create map object.
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Set up field mappings.
    $this->addFieldMapping('title', 'name');

    // Pokemon Move types
    $this->addFieldMapping('field_move_type', 'Move Type');
    $this->addFieldMapping('field_move_type:source_type')->defaultValue('name');
    $this->addFieldMapping('field_move_type:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_move_type:ignore_case')->defaultValue(TRUE);

    // Pokemon Move types
    $this->addFieldMapping('field_pokemon_type', 'pokemonType');
    $this->addFieldMapping('field_pokemon_type:source_type')->defaultValue('name');
    $this->addFieldMapping('field_pokemon_type:create_term')->defaultValue(FALSE);
    $this->addFieldMapping('field_pokemon_type:ignore_case')->defaultValue(TRUE);

    // Move Stats
    $this->addFieldMapping('field_move_power', 'power');
    $this->addFieldMapping('field_critical_chance', 'criticalChance');
    $this->addFieldMapping('field_move_cooldown', 'durationMs');
    $this->addFieldMapping('field_move_energy', 'energyDelta');
    $this->addFieldMapping('field_move_dps', 'DPS');

    // Keeping around for node comments.
    $this->addFieldMapping('log')->defaultValue('Imported by Move migration');

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
    ));
    // Ignore fields.
    $this->addUnmigratedSources(array('id', 'name'));
  }

  function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    $row->id = strstr($row->id, '_FAST', true) ?: $row->id;
    $row->DPS = round($row->power/($row->durationMs/1000), 2);
    $row->name = strstr($row->name, ' Fast', true) ?: $row->name;
    $row->pokemonType = $row->pokemonType->name;

  }

}
