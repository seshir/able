<?php 
/**
 * @file
 * Theme implementation for identity zone
 * Used for storing links to home page, settings, etc.
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
  <div<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>