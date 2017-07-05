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
