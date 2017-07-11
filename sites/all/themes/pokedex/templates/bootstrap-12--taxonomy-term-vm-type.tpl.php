<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
?>

<!-- Needed to get rid of div wrappers for the tax types -->

<?php print $central; ?>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
