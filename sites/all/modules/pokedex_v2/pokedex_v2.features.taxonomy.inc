<?php
/**
 * @file
 * pokedex_v2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pokedex_v2_taxonomy_default_vocabularies() {
  return array(
    'pokedex_vocab' => array(
      'name' => 'Pokemon: Types',
      'machine_name' => 'pokedex_vocab',
      'description' => 'Terms for pokemon types',
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
