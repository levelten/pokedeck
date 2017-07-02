<?php

/**
 * Implements hook_migrate_api().
 */
function pokedex_v2_migrate_api() {
  return array(
    'api' => 2,
    'groups' => array(
      'pokemon_nodes' => array(
        'title' => t('Pokemon: Nodes'),
      ),
      'pokemon_move_nodes' => array(
        'title' => t('Pokemon: Move Nodes'),
      ),
    ),
    'migrations' => array(
      'PokemonNodes' => array(
        'class_name' => 'PokedexV2NodeMigration',
        'group_name' => 'pokemon_nodes',
      ),
      'PokemonMoveNodes' => array(
        'class_name' => 'PokedexV2MoveNodeMigration',
        'group_name' => 'pokemon_move_nodes',
      ),
    ),
  );
}