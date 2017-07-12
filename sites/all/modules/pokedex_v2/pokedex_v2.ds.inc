<?php
/**
 * @file
 * pokedex_v2.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pokedex_v2_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|pokedex_vocab|type_bean';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'pokedex_vocab';
  $ds_fieldsetting->view_mode = 'type_bean';
  $ds_fieldsetting->settings = array(
    'type_color_bean' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|pokedex_vocab|type_bean'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|pokedex_vocab|vm_type';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'pokedex_vocab';
  $ds_fieldsetting->view_mode = 'vm_type';
  $ds_fieldsetting->settings = array(
    'type_color_label' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|pokedex_vocab|vm_type'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pokedex_v2_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'type_color_bean';
  $ds_field->label = 'type color bean';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div style="background-color: [term:field_type_color]; color: white; text-align: center;" class="bean">[term:name]</div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['type_color_bean'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'type_color_label';
  $ds_field->label = 'type color label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p style="background-color: [term:field_type_color]; color: white; padding: 11px 4px;">[term:name]</p>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['type_color_label'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pokedex_v2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|pokedex_vocab|background';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'pokedex_vocab';
  $ds_layout->view_mode = 'background';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
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
  $export['taxonomy_term|pokedex_vocab|background'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|pokedex_vocab|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'pokedex_vocab';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
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
    'regions' => array(
      'central' => array(
        0 => 'field_image',
        1 => 'field_type_color',
      ),
    ),
    'fields' => array(
      'field_image' => 'central',
      'field_type_color' => 'central',
    ),
  );
  $export['taxonomy_term|pokedex_vocab|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|pokedex_vocab|type_bean';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'pokedex_vocab';
  $ds_layout->view_mode = 'type_bean';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'type_color_bean',
      ),
    ),
    'fields' => array(
      'type_color_bean' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|pokedex_vocab|type_bean'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|pokedex_vocab|vm_type';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'pokedex_vocab';
  $ds_layout->view_mode = 'vm_type';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
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
    'regions' => array(
      'central' => array(
        0 => 'type_color_label',
      ),
    ),
    'fields' => array(
      'type_color_label' => 'central',
    ),
  );
  $export['taxonomy_term|pokedex_vocab|vm_type'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pokedex_v2_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'background';
  $ds_view_mode->label = 'Background';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['background'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'next_evolution';
  $ds_view_mode->label = 'Next evolution';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['next_evolution'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'type_bean';
  $ds_view_mode->label = 'Type: Bean';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['type_bean'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'vm_type';
  $ds_view_mode->label = 'Type';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['vm_type'] = $ds_view_mode;

  return $export;
}
