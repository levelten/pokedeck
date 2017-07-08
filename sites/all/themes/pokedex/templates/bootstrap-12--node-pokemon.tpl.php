<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
    <h2 class="global-title">The Global Pokédex</h2>
    <p style="text-align: center; margin: 0;">The Global Pokedex contains data on species found by travelers around the world. Select a species to learn more!</p>
    <hr>
    <div class="pokemon-card">
      <div class="row card-shadow">
        <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">
          <?php print $central; ?>
        </<?php print $central_wrapper; ?>>
      </div>
    </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
