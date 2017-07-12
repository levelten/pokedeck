<?php
/**
 * @file
 * poke_pokemon.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function poke_pokemon_taxonomy_default_vocabularies() {
  return array(
    'pokedex_buddy_size_vocab' => array(
      'name' => 'Pokemon: Buddy Sizes',
      'machine_name' => 'pokedex_buddy_size_vocab',
      'description' => 'Buddy sizes of different Pokemon',
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
    'pokedex_gen_vocab' => array(
      'name' => 'Pokemon: Generations',
      'machine_name' => 'pokedex_gen_vocab',
      'description' => 'Generation of different Pokemon',
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
