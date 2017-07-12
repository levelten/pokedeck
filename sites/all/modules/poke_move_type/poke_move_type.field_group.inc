<?php
/**
 * @file
 * poke_move_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function poke_move_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dps|node|pokemon_move|teaser';
  $field_group->group_name = 'group_dps';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon_move';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_move_container';
  $field_group->data = array(
    'label' => 'DPS',
    'weight' => '1',
    'children' => array(
      0 => 'field_move_dps',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DPS',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-dps field-group-div col-md-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_dps|node|pokemon_move|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_move_container|node|pokemon_move|teaser';
  $field_group->group_name = 'group_move_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon_move';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'move container',
    'weight' => '1',
    'children' => array(
      0 => 'group_dps',
      1 => 'group_stats',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'move container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-move-container field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_move_container|node|pokemon_move|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats|node|pokemon_move|teaser';
  $field_group->group_name = 'group_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon_move';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_move_container';
  $field_group->data = array(
    'label' => 'Stats',
    'weight' => '2',
    'children' => array(
      0 => 'field_move_power',
      1 => 'move_info',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Stats',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-stats field-group-div col-md-10',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_stats|node|pokemon_move|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('DPS');
  t('Stats');
  t('move container');

  return $field_groups;
}
