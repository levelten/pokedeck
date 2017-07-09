<?php

function pokedex_form_system_theme_settings_alter(&$form, &$form_state) {
	$form['general']['#weight'] = -8;

	$default_settings = array();
	$theme_path = drupal_get_path('theme', 'pokedex');

	$filename = DRUPAL_ROOT . '/' . $theme_path . '/pokedex.info';
	$info = drupal_parse_info_file($filename);
	if (isset($info['settings'])) {
		$default_settings = $info['settings'];
	}

	$form['pokedex'] = array(
		'#type' => 'vertical_tabs',
		'#prefix' => '<h2><small>Pokedex</small></h2>',
		'#weight' => -9,
	);

	$form['pokedex_config'] = array(
		'#type' => 'fieldset',
		'#group' => 'pokedex',
		'#title' => t('General'),
	);

	$form['pokedex_config']['devel_messages'] = array(
		'#type' => 'checkbox',
		'#title' => t('Devel Messages'),
		'#default_value' => theme_get_setting('devel_messages'),
		'#description' => t('Disables XSS check for messages.'),
	);

}