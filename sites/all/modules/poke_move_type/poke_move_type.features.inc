<?php
/**
 * @file
 * poke_move_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function poke_move_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function poke_move_type_node_info() {
  $items = array(
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
