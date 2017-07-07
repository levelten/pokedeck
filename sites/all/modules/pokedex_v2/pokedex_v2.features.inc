<?php
/**
 * @file
 * pokedex_v2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pokedex_v2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pokedex_v2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pokedex_v2_node_info() {
  $items = array(
    'pokemon' => array(
      'name' => t('Pokemon'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'pokemon_move' => array(
      'name' => t('Pokemon: Move'),
      'base' => 'node_content',
      'description' => t('Node for each move associated with each pokemon'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
