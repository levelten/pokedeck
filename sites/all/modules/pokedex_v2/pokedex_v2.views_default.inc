<?php
/**
 * @file
 * pokedex_v2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pokedex_v2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'global_moves';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Global Moves';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Global Moves';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pokemon type */
  $handler->display->display_options['fields']['field_pokemon_type']['id'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['table'] = 'field_data_field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['field'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pokemon_type']['delta_offset'] = '0';
  /* Field: Content: Power */
  $handler->display->display_options['fields']['field_move_power']['id'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['table'] = 'field_data_field_move_power';
  $handler->display->display_options['fields']['field_move_power']['field'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_power']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Energy */
  $handler->display->display_options['fields']['field_move_energy']['id'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['table'] = 'field_data_field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['field'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Cooldown */
  $handler->display->display_options['fields']['field_move_cooldown']['id'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['table'] = 'field_data_field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['field'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['label'] = 'Cooldown (ms)';
  $handler->display->display_options['fields']['field_move_cooldown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_cooldown']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: DPS */
  $handler->display->display_options['fields']['field_move_dps']['id'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['table'] = 'field_data_field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['field'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_dps']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_move_type']['id'] = 'field_move_type';
  $handler->display->display_options['fields']['field_move_type']['table'] = 'field_data_field_move_type';
  $handler->display->display_options['fields']['field_move_type']['field'] = 'field_move_type';
  $handler->display->display_options['fields']['field_move_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_type']['type'] = 'taxonomy_term_reference_plain';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pokemon_move' => 'pokemon_move',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_move_type) */
  $handler->display->display_options['filters']['field_move_type_tid']['id'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['table'] = 'field_data_field_move_type';
  $handler->display->display_options['filters']['field_move_type_tid']['field'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_move_type_tid']['expose']['operator_id'] = 'field_move_type_tid_op';
  $handler->display->display_options['filters']['field_move_type_tid']['expose']['label'] = 'Move Type';
  $handler->display->display_options['filters']['field_move_type_tid']['expose']['operator'] = 'field_move_type_tid_op';
  $handler->display->display_options['filters']['field_move_type_tid']['expose']['identifier'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_move_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_move_type_tid']['vocabulary'] = 'pokemon_move_type';
  $handler->display->display_options['filters']['field_move_type_tid']['hierarchy'] = 1;

  /* Display: Global Moves */
  $handler = $view->new_display('page', 'Global Moves', 'page');
  $handler->display->display_options['path'] = 'global-moves';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Global Moves';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Quick Moves */
  $handler = $view->new_display('block', 'Quick Moves', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Quick Moves';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pokemon type */
  $handler->display->display_options['fields']['field_pokemon_type']['id'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['table'] = 'field_data_field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['field'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pokemon_type']['delta_offset'] = '0';
  /* Field: Content: Power */
  $handler->display->display_options['fields']['field_move_power']['id'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['table'] = 'field_data_field_move_power';
  $handler->display->display_options['fields']['field_move_power']['field'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_power']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Energy */
  $handler->display->display_options['fields']['field_move_energy']['id'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['table'] = 'field_data_field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['field'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Cooldown */
  $handler->display->display_options['fields']['field_move_cooldown']['id'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['table'] = 'field_data_field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['field'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['label'] = 'Cooldown (ms)';
  $handler->display->display_options['fields']['field_move_cooldown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_cooldown']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: DPS */
  $handler->display->display_options['fields']['field_move_dps']['id'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['table'] = 'field_data_field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['field'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_dps']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pokemon_move' => 'pokemon_move',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_move_type) */
  $handler->display->display_options['filters']['field_move_type_tid']['id'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['table'] = 'field_data_field_move_type';
  $handler->display->display_options['filters']['field_move_type_tid']['field'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['value'] = array(
    0 => '441',
  );
  $handler->display->display_options['filters']['field_move_type_tid']['vocabulary'] = 'pokemon_move_type';

  /* Display: Charge Moves */
  $handler = $view->new_display('block', 'Charge Moves', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Charge Moves';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Pokemon type */
  $handler->display->display_options['fields']['field_pokemon_type']['id'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['table'] = 'field_data_field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['field'] = 'field_pokemon_type';
  $handler->display->display_options['fields']['field_pokemon_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pokemon_type']['delta_offset'] = '0';
  /* Field: Content: Power */
  $handler->display->display_options['fields']['field_move_power']['id'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['table'] = 'field_data_field_move_power';
  $handler->display->display_options['fields']['field_move_power']['field'] = 'field_move_power';
  $handler->display->display_options['fields']['field_move_power']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_power']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Energy */
  $handler->display->display_options['fields']['field_move_energy']['id'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['table'] = 'field_data_field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['field'] = 'field_move_energy';
  $handler->display->display_options['fields']['field_move_energy']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_move_energy']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Cooldown */
  $handler->display->display_options['fields']['field_move_cooldown']['id'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['table'] = 'field_data_field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['field'] = 'field_move_cooldown';
  $handler->display->display_options['fields']['field_move_cooldown']['label'] = 'Cooldown (ms)';
  $handler->display->display_options['fields']['field_move_cooldown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_cooldown']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: DPS */
  $handler->display->display_options['fields']['field_move_dps']['id'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['table'] = 'field_data_field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['field'] = 'field_move_dps';
  $handler->display->display_options['fields']['field_move_dps']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_move_dps']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pokemon_move' => 'pokemon_move',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_move_type) */
  $handler->display->display_options['filters']['field_move_type_tid']['id'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['table'] = 'field_data_field_move_type';
  $handler->display->display_options['filters']['field_move_type_tid']['field'] = 'field_move_type_tid';
  $handler->display->display_options['filters']['field_move_type_tid']['value'] = array(
    0 => '440',
  );
  $handler->display->display_options['filters']['field_move_type_tid']['vocabulary'] = 'pokemon_move_type';
  $export['global_moves'] = $view;

  $view = new view();
  $view->name = 'global_pokedex';
  $view->description = 'The Silph Global Pokedex contains data on species found by travelers around the world. Select a species to learn more!';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Global Pokedex';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Global Pokedex';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '9';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Number (field_number) */
  $handler->display->display_options['sorts']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['sorts']['field_number_value']['table'] = 'field_data_field_number';
  $handler->display->display_options['sorts']['field_number_value']['field'] = 'field_number_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pokemon' => 'pokemon',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search pokemon by name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 0;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 0;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Generation (field_generation) */
  $handler->display->display_options['filters']['field_generation_tid']['id'] = 'field_generation_tid';
  $handler->display->display_options['filters']['field_generation_tid']['table'] = 'field_data_field_generation';
  $handler->display->display_options['filters']['field_generation_tid']['field'] = 'field_generation_tid';
  $handler->display->display_options['filters']['field_generation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_generation_tid']['expose']['operator_id'] = 'field_generation_tid_op';
  $handler->display->display_options['filters']['field_generation_tid']['expose']['label'] = 'Generation';
  $handler->display->display_options['filters']['field_generation_tid']['expose']['operator'] = 'field_generation_tid_op';
  $handler->display->display_options['filters']['field_generation_tid']['expose']['identifier'] = 'field_generation_tid';
  $handler->display->display_options['filters']['field_generation_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_generation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_generation_tid']['vocabulary'] = 'pokedex_gen_vocab';
  $handler->display->display_options['filters']['field_generation_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'global-pokedex';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Global Pokedex';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['global_pokedex'] = $view;

  return $export;
}
