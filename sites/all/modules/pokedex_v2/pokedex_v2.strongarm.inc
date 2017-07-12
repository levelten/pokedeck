<?php
/**
 * @file
 * pokedex_v2.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pokedex_v2_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pokedex_vocab_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pokedex_vocab_pattern'] = $strongarm;

  return $export;
}
