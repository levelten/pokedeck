<?php
/**
 * @file
 * pokedex_v2.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pokedex_v2_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-pokedex_vocab-field_image'.
  $field_instances['taxonomy_term-pokedex_vocab-field_image'] = array(
    'bundle' => 'pokedex_vocab',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'background' => array(
        'label' => 'hidden',
        'module' => 'background_image_formatter',
        'settings' => array(
          'background_image_output_type' => 'css',
          'background_image_selector' => '.[term:name]-bg-image',
          'image_style' => '',
        ),
        'type' => 'background_image_formatter',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'background_image_formatter',
        'settings' => array(
          'background_image_output_type' => 'css',
          'background_image_selector' => '.[term:name]-bg-image',
          'image_style' => '',
        ),
        'type' => 'background_image_formatter',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'type_bean' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'vm_type' => array(
        'label' => 'above',
        'module' => 'background_image_formatter',
        'settings' => array(
          'background_image_output_type' => 'inline',
          'background_image_selector' => 'background-image-formatter',
          'image_style' => '',
        ),
        'type' => 'background_image_formatter',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_image',
    'label' => 'Background Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-pokedex_vocab-field_type_color'.
  $field_instances['taxonomy_term-pokedex_vocab-field_type_color'] = array(
    'bundle' => 'pokedex_vocab',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'background' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'type_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'vm_type' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_type_color',
    'label' => 'Color',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background Image');
  t('Color');

  return $field_instances;
}
