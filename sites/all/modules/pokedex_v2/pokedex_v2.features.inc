<?php
/**
 * @file
 * pokedex_v2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pokedex_v2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
 * Implements hook_image_default_styles().
 */
function pokedex_v2_image_default_styles() {
  $styles = array();

  // Exported image style: tiny.
  $styles['tiny'] = array(
    'label' => 'Tiny (75x75)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 75,
          'height' => 75,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: top_header.
  $styles['top_header'] = array(
    'label' => 'Top Header (600x150)',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 610,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
