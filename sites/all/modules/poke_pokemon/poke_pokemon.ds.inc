<?php
/**
 * @file
 * poke_pokemon.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function poke_pokemon_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pokemon|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pokemon';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'candy_distance' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'defence_icon_label' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'type_bonus_description' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'card-title',
        'exclude node title settings' => '1',
        'ft' => array(),
      ),
    ),
    'next_pokemon' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'prev_pokemon' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'stats_as_bars' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'stats_as_bars',
    ),
    'field_height' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Height',
        ),
      ),
    ),
    'field_weight' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Weight',
        ),
      ),
    ),
    'field_flee_rate' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '#',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'number-pos',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_resistant' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Advantage Over',
          'lb-el' => 'span',
          'lb-col' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-name-field-resistant',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_weakness' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Weak Against',
          'lb-el' => 'span',
          'lb-col' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-name-field-weakness',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_quick_move' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_charge_move' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_candy_to_evolve' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Candy to Evolve',
          'lb-el' => 'span',
          'lb-cl' => 'candy-label',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'candy-amount',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|pokemon|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pokemon|next_evolution';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pokemon';
  $ds_fieldsetting->view_mode = 'next_evolution';
  $ds_fieldsetting->settings = array(
    'next_evolution_label' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
        'exclude node title settings' => '1',
      ),
    ),
  );
  $export['node|pokemon|next_evolution'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pokemon|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pokemon';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'pokemon_color_label' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|pokemon|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function poke_pokemon_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'defence_icon_label';
  $ds_field->label = 'Defence Icon Label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h4><i class="fa fa-shield" aria-hidden="true"></i> Defense</h4>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['defence_icon_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'next_evolution_label';
  $ds_field->label = 'Next Evolution Label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Next evolution',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['next_evolution_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pokemon_color_label';
  $ds_field->label = 'pokemon color label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div style="background-color: [node:field-type:0:field_type_color]; width: 72px; height: 72px; border-radius: 2px; display: inline-block; margin: -1px 1px;"><a href="[node:url]"><img style="padding: 5px;" class="img-rounded img-responsive" src="[node:field_img:tiny]" alt="#"></a></div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['pokemon_color_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'stats_progess';
  $ds_field->label = 'Stats Progess';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="progress"><div class="progress-bar" role="progressbar" aria-valuenow="107" aria-valuemin="0" aria-valuemax="330" style="width: 60%;"><span class="sr-only">60% Complete</span></div></div>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['stats_progess'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'type_bonus_description';
  $ds_field->label = 'Type Bonus Description';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>Moves with the same type as a Pokemon receive a 25% boost called a Same-Type Attack Bonus (STAB)! These bonuses are already calculated above!</p>',
      'format' => 'filtered_html',
    ),
    'use_token' => 0,
  );
  $export['type_bonus_description'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function poke_pokemon_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pokemon|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pokemon';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_top_section',
        1 => 'group_type_section',
        2 => 'group_top_left',
        3 => 'group_defense_left',
        4 => 'group_top_right',
        5 => 'group_defense_center',
        6 => 'defence_icon_label',
        7 => 'group_stats_section',
        8 => 'group_defense_right',
        9 => 'field_resistant',
        10 => 'group_moves_section',
        11 => 'field_weakness',
        12 => 'group_buddy_section',
        13 => 'group_defense_section',
        14 => 'next_pokemon',
        15 => 'field_type',
        16 => 'group_pager_section',
        17 => 'field_flee_rate',
        18 => 'prev_pokemon',
        19 => 'stats_as_bars',
        20 => 'field_candy_to_evolve',
        21 => 'field_quick_move',
        22 => 'field_charge_move',
        23 => 'group_moves_left',
        24 => 'field_number',
        25 => 'group_moves_right',
        26 => 'title',
        27 => 'field_img',
        28 => 'type_bonus_description',
        29 => 'field_height',
        30 => 'field_weight',
        31 => 'group_buddy_left',
        32 => 'field_description',
        33 => 'group_buddy_center',
        34 => 'candy_distance',
        35 => 'group_buddy_right',
        36 => 'group_pager_left',
        37 => 'group_pager_right',
      ),
    ),
    'fields' => array(
      'group_top_section' => 'central',
      'group_type_section' => 'central',
      'group_top_left' => 'central',
      'group_defense_left' => 'central',
      'group_top_right' => 'central',
      'group_defense_center' => 'central',
      'defence_icon_label' => 'central',
      'group_stats_section' => 'central',
      'group_defense_right' => 'central',
      'field_resistant' => 'central',
      'group_moves_section' => 'central',
      'field_weakness' => 'central',
      'group_buddy_section' => 'central',
      'group_defense_section' => 'central',
      'next_pokemon' => 'central',
      'field_type' => 'central',
      'group_pager_section' => 'central',
      'field_flee_rate' => 'central',
      'prev_pokemon' => 'central',
      'stats_as_bars' => 'central',
      'field_candy_to_evolve' => 'central',
      'field_quick_move' => 'central',
      'field_charge_move' => 'central',
      'group_moves_left' => 'central',
      'field_number' => 'central',
      'group_moves_right' => 'central',
      'title' => 'central',
      'field_img' => 'central',
      'type_bonus_description' => 'central',
      'field_height' => 'central',
      'field_weight' => 'central',
      'group_buddy_left' => 'central',
      'field_description' => 'central',
      'group_buddy_center' => 'central',
      'candy_distance' => 'central',
      'group_buddy_right' => 'central',
      'group_pager_left' => 'central',
      'group_pager_right' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        'pokemon-card' => 'pokemon-card',
      ),
      'central' => array(
        'card-shadow' => 'card-shadow',
      ),
    ),
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
  $export['node|pokemon|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pokemon|next_evolution';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pokemon';
  $ds_layout->view_mode = 'next_evolution';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_number',
        2 => 'field_img',
        3 => 'next_evolution_label',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_number' => 'central',
      'field_img' => 'central',
      'next_evolution_label' => 'central',
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
  $export['node|pokemon|next_evolution'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pokemon|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pokemon';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'pokemon_color_label',
      ),
    ),
    'fields' => array(
      'pokemon_color_label' => 'central',
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
  $export['node|pokemon|teaser'] = $ds_layout;

  return $export;
}
