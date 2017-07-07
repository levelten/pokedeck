<?php
/**
 * @file
 * Helpers for module.
 */

/**
 * CSS theme callback function.
 */
function theme_background_image_formatter_css($variables) {
  $css = $variables['background_image_selector'] . ' {background-image: url("' . $variables['image_url'] . '");}' . PHP_EOL;

  drupal_add_css($css, array('type' => 'inline'));
}

/**
 * Is the formatter for this module.
 */
function is_background_image_formatter_display_type($display) {
  return $display['type'] == 'background_image_formatter';
}

/**
 * Add tokens to settings form.
 */
function background_image_formatter_token_settings_form($field, &$element) {

  $tokens_mapping = token_get_entity_mapping();

  $entity_types = array_keys($field['bundles']);

  $tokens_list = array();

  foreach ($tokens_mapping as $token_map => $entity_map) {
    foreach ($entity_types as $entity_type) {
      if ($entity_type == $entity_map) {
        $tokens_list[] = $token_map;
      }
    }
  }

  $element['background_image_token']['tokens'] = array(
    '#type' => 'fieldset',
    '#title' => t('Available tokens'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $element['background_image_token']['tokens']['list'] = array(
    '#theme' => 'token_tree',
    '#token_types' => $tokens_list,
    '#global_types' => TRUE,
    '#click_insert' => TRUE,
  );
}
