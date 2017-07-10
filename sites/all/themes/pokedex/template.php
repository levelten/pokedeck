<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements hook_preprocess_page().
 * @param $variables
 */
function pokedex_preprocess_page(&$variables) {
	// Load all Type terms. Create related classes.
	$vocabulary = taxonomy_vocabulary_machine_name_load('pokedex_vocab');
	if (!empty($vocabulary)) {
		$terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
		$attributes = [];
		foreach ($terms as $term) {
		  $image = (!empty($term->field_image['und'][0]['uri'])) ? $term->field_image['und'][0]['uri'] : NULL;
      $color = (!empty($term->field_type_color['und'][0]['safe_value'])) ? $term->field_type_color['und'][0]['safe_value'] : 'rgba(0,0,0,0)';
			$attributes[$term->name] = [
				'color' => $color,
				'image' => ($image) ? file_create_url($image) : NULL,
			];
		}

		// Could probably save a step, but for clarity,
    // create style string and add to page.
    $style = '';
    foreach ($attributes as $key => $value) {
		  $style .= ".pokemon-type-${key} .color {";
		  $style .= "color: ${value['color']};";
		  $style .= "}";
      $style .= ".pokemon-type-${key} .bg-color {";
      $style .= "background-color: ${value['color']};";
      $style .= "}";
      $style .= ".pokemon-type-${key} .bg-image {";
      $style .= "background-image: url('${value['image']}');";
      $style .= "background-size: cover;";
      $style .= "}";
    }

    drupal_add_css($style, array('type' => 'inline'));
	}
}

/**
 * Implements hook_preprocess_node().
 * @param $variables
 */
function pokedex_preprocess_node(&$variables) {

	// Only pokemon.
	if ($variables['type'] == 'pokemon') {
    // Get type from pokemon, add to class list.
    if (!empty($variables['field_type'])) {
      $variables['classes_array'][] = 'pokemon-type-'.$variables['field_type'][0]['entity']->name;
    }
	}
}

/**
 * Returns HTML for status and/or error messages, grouped by type.
 *
 * An invisible heading identifies the messages for assistive technology.
 * Sighted users see a colored box. See http://www.w3.org/TR/WCAG-TECHS/H69.html
 * for info.
 *
 * @param array $variables
 *   An associative array containing:
 *   - display: (optional) Set to 'status' or 'error' to display only messages
 *     of that type.
 *
 * @return string
 *   The constructed HTML.
 *
 * @see theme_status_messages()
 *
 * @ingroup theme_functions
 */
function pokedex_status_messages($variables) {
	$display = $variables['display'];
	$output = '';

	$status_heading = array(
		'status' => t('Status message'),
		'error' => t('Error message'),
		'warning' => t('Warning message'),
		'info' => t('Informative message'),
		);

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
	$status_class = array(
		'status' => 'success',
		'error' => 'danger',
		'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
		'info' => 'info',
		);

  // Retrieve messages.
	$message_list = drupal_get_messages($display);

  // Allow the disabled_messages module to filter the messages, if enabled.
	if (module_exists('disable_messages') && variable_get('disable_messages_enable', '1')) {
		$message_list = disable_messages_apply_filters($message_list);
	}

  // Check if devel_messages is enabled.
	$devel_messages = theme_get_setting('devel_messages');

	foreach ($message_list as $type => $messages) {
		$class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
		$output .= "<div class=\"alert alert-block$class messages $type\">\n";
		$output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">&times;</a>\n";

		if (!empty($status_heading[$type])) {
			$output .= '<h4 class="element-invisible">' . _bootstrap_filter_xss($status_heading[$type]) . "</h4>\n";
		}

		if (count($messages) > 1) {
			$output .= " <ul>\n";
			foreach ($messages as $message) {
				$output .= ($devel_messages) ? '  <li>' . $message . "</li>\n" : '  <li>' . _bootstrap_filter_xss($message) . "</li>\n";
			}
			$output .= " </ul>\n";
		}
		else {
			$output .= ($devel_messages) ? $messages[0] : _bootstrap_filter_xss($messages[0]);
		}

		$output .= "</div>\n";
	}
	return $output;
}
