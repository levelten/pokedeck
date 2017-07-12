<?php
/**
 * @file
 * poke_pokemon.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function poke_pokemon_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buddy_center|node|pokemon|default';
  $field_group->group_name = 'group_buddy_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_buddy_section';
  $field_group->data = array(
    'label' => 'Buddy Center',
    'weight' => '35',
    'children' => array(
      0 => 'field_candy_to_evolve',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buddy Center',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buddy-center field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buddy_center|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buddy_left|node|pokemon|default';
  $field_group->group_name = 'group_buddy_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_buddy_section';
  $field_group->data = array(
    'label' => 'Buddy: Left',
    'weight' => '33',
    'children' => array(
      0 => 'candy_distance',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buddy: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buddy-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buddy_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buddy_right|node|pokemon|default';
  $field_group->group_name = 'group_buddy_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_buddy_section';
  $field_group->data = array(
    'label' => 'Buddy: Right',
    'weight' => '36',
    'children' => array(
      0 => 'field_flee_rate',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buddy: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buddy-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buddy_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buddy_section|node|pokemon|default';
  $field_group->group_name = 'group_buddy_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Buddy Section',
    'weight' => '4',
    'children' => array(
      0 => 'group_buddy_left',
      1 => 'group_buddy_right',
      2 => 'group_buddy_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buddy Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buddy-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buddy_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_defense_center|node|pokemon|default';
  $field_group->group_name = 'group_defense_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_defense_section';
  $field_group->data = array(
    'label' => 'Defense Center',
    'weight' => '2',
    'children' => array(
      0 => 'field_resistant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Defense Center',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-defense-center field-group-div col-xs-5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_defense_center|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_defense_left|node|pokemon|default';
  $field_group->group_name = 'group_defense_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_defense_section';
  $field_group->data = array(
    'label' => 'Defense: Left',
    'weight' => '1',
    'children' => array(
      0 => 'defence_icon_label',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Defense: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-defense-left field-group-div col-xs-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_defense_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_defense_right|node|pokemon|default';
  $field_group->group_name = 'group_defense_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_defense_section';
  $field_group->data = array(
    'label' => 'Defense: Right',
    'weight' => '3',
    'children' => array(
      0 => 'field_weakness',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Defense: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-defense-right field-group-div col-xs-5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_defense_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_defense_section|node|pokemon|default';
  $field_group->group_name = 'group_defense_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Defense Section',
    'weight' => '5',
    'children' => array(
      0 => 'group_defense_left',
      1 => 'group_defense_right',
      2 => 'group_defense_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Defense Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-defense-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_defense_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_left|node|pokemon|default';
  $field_group->group_name = 'group_description_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_description_section';
  $field_group->data = array(
    'label' => 'Description: Left',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-description-left field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_right|node|pokemon|default';
  $field_group->group_name = 'group_description_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_description_section';
  $field_group->data = array(
    'label' => 'Description: Right',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-description-right field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_section|node|pokemon|default';
  $field_group->group_name = 'group_description_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description Section',
    'weight' => '21',
    'children' => array(
      0 => 'group_description_left',
      1 => 'group_description_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-description-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_description_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moves_left|node|pokemon|default';
  $field_group->group_name = 'group_moves_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_moves_section';
  $field_group->data = array(
    'label' => 'Moves: Left',
    'weight' => '28',
    'children' => array(
      0 => 'field_quick_move',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Moves: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-moves-left field-group-div col-xs-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_moves_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moves_right|node|pokemon|default';
  $field_group->group_name = 'group_moves_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_moves_section';
  $field_group->data = array(
    'label' => 'Moves: Right',
    'weight' => '29',
    'children' => array(
      0 => 'field_charge_move',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Moves: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-moves-right field-group-div col-xs-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_moves_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moves_section|node|pokemon|default';
  $field_group->group_name = 'group_moves_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moveset',
    'weight' => '3',
    'children' => array(
      0 => 'type_bonus_description',
      1 => 'group_moves_left',
      2 => 'group_moves_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Moveset',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-moves-section field-group-div row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_moves_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pager_left|node|pokemon|default';
  $field_group->group_name = 'group_pager_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pager_section';
  $field_group->data = array(
    'label' => 'Pager: Left',
    'weight' => '44',
    'children' => array(
      0 => 'prev_pokemon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pager: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pager-left field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pager_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pager_right|node|pokemon|default';
  $field_group->group_name = 'group_pager_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pager_section';
  $field_group->data = array(
    'label' => 'Pager: Right',
    'weight' => '45',
    'children' => array(
      0 => 'next_pokemon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pager: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pager-right field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pager_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pager_section|node|pokemon|default';
  $field_group->group_name = 'group_pager_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pager Section',
    'weight' => '6',
    'children' => array(
      0 => 'group_pager_right',
      1 => 'group_pager_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pager Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-pager-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pager_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stats_section|node|pokemon|default';
  $field_group->group_name = 'group_stats_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stats Section',
    'weight' => '2',
    'children' => array(
      0 => 'stats_as_bars',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Stats Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-stats-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_stats_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_left|node|pokemon|default';
  $field_group->group_name = 'group_top_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_top_section';
  $field_group->data = array(
    'label' => 'Top: Left',
    'weight' => '1',
    'children' => array(
      0 => 'field_img',
      1 => 'field_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-top-left field-group-div col-xs-4 equalheight-element',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_middle|node|pokemon|default';
  $field_group->group_name = 'group_top_middle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top: Middle',
    'weight' => '22',
    'children' => array(
      0 => 'field_generation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top: Middle',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-top-middle field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_middle|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_right|node|pokemon|default';
  $field_group->group_name = 'group_top_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_top_section';
  $field_group->data = array(
    'label' => 'Top: Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_height',
      1 => 'field_weight',
      2 => 'field_description',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-top-right field-group-div col-xs-8 equalheight-element bg-color-tran',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_section|node|pokemon|default';
  $field_group->group_name = 'group_top_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Section',
    'weight' => '0',
    'children' => array(
      0 => 'group_top_left',
      1 => 'group_top_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-top-section field-group-div row bg-image equalheight-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_section|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_left|node|pokemon|default';
  $field_group->group_name = 'group_type_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type: Left',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Type: Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-type-left field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_type_left|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_right|node|pokemon|default';
  $field_group->group_name = 'group_type_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type: Right',
    'weight' => '28',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Type: Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-type-right field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_type_right|node|pokemon|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_section|node|pokemon|default';
  $field_group->group_name = 'group_type_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pokemon';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type Section',
    'weight' => '1',
    'children' => array(
      0 => 'field_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Type Section',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-type-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_type_section|node|pokemon|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Buddy Center');
  t('Buddy Section');
  t('Buddy: Left');
  t('Buddy: Right');
  t('Defense Center');
  t('Defense Section');
  t('Defense: Left');
  t('Defense: Right');
  t('Description Section');
  t('Description: Left');
  t('Description: Right');
  t('Moves: Left');
  t('Moves: Right');
  t('Moveset');
  t('Pager Section');
  t('Pager: Left');
  t('Pager: Right');
  t('Stats Section');
  t('Top Section');
  t('Top: Left');
  t('Top: Middle');
  t('Top: Right');
  t('Type Section');
  t('Type: Left');
  t('Type: Right');

  return $field_groups;
}
