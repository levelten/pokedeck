<?php
/**
 * @file
 * pokedex_v2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pokedex_v2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_charge-moves:node/5225.
  $menu_links['main-menu_charge-moves:node/5225'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5225',
    'router_path' => 'node/%',
    'link_title' => 'Charge Moves',
    'options' => array(
      'identifier' => 'main-menu_charge-moves:node/5225',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_global-moves:global-moves',
  );
  // Exported menu link: main-menu_global-moves:global-moves.
  $menu_links['main-menu_global-moves:global-moves'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'global-moves',
    'router_path' => 'global-moves',
    'link_title' => 'Global Moves',
    'options' => array(
      'identifier' => 'main-menu_global-moves:global-moves',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_global-pokedex:global-pokedex.
  $menu_links['main-menu_global-pokedex:global-pokedex'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'global-pokedex',
    'router_path' => 'global-pokedex',
    'link_title' => 'Global Pokedex',
    'options' => array(
      'identifier' => 'main-menu_global-pokedex:global-pokedex',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_quick-moves:node/5226.
  $menu_links['main-menu_quick-moves:node/5226'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5226',
    'router_path' => 'node/%',
    'link_title' => 'Quick Moves',
    'options' => array(
      'identifier' => 'main-menu_quick-moves:node/5226',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_global-moves:global-moves',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Charge Moves');
  t('Global Moves');
  t('Global Pokedex');
  t('Quick Moves');

  return $menu_links;
}
