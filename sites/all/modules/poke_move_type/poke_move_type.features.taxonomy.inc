<?php
/**
 * @file
 * poke_move_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function poke_move_type_taxonomy_default_vocabularies() {
  return array(
    'pokemon_move_type' => array(
      'name' => 'Pokemon: Move Type',
      'machine_name' => 'pokemon_move_type',
      'description' => 'Type of move: Quick or Charge ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
