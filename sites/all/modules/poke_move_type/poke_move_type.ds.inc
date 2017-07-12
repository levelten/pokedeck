<?php
/**
 * @file
 * poke_move_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function poke_move_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pokemon_move|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pokemon_move';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'move_info' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|pokemon_move|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pokemon_move|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pokemon_move';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'move_type_label' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|pokemon_move|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function poke_move_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'move_type_label';
  $ds_field->label = 'move type label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="move-container move-type-[node:field-pokemon-type:0:name]" >
  <div class="col-md-2 move-dps" style="background-color:[node:field-pokemon-type:0:field_type_color];">
    <div><p>[node:field_move_dps]</p><p class="sub-text">DPS</p></div>
  </div>
  <div class="col-md-10 move-info" style="background-color:[node:field-pokemon-type:0:field_type_color];">
    <div>
      <p>[node:title] <span class="type-bonus hidden">Type Bonus! </span></p>
      <p class="sub-text">[node:field_pokemon_type] | POW. [node:field_move_power] | [node:field_move_cooldown] ms </p>
    </div>
  </div>
</div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['move_type_label'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function poke_move_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pokemon_move|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pokemon_move';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'move_info',
        2 => 'field_move_dps',
        3 => 'field_move_power',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'move_info' => 'ds_content',
      'field_move_dps' => 'ds_content',
      'field_move_power' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|pokemon_move|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pokemon_move|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pokemon_move';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'move_type_label',
      ),
    ),
    'fields' => array(
      'move_type_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|pokemon_move|teaser'] = $ds_layout;

  return $export;
}
