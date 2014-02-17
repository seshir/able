<?php 
/**
 * @file
 * Alpha's theme implementation to display a region.
 */
?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php print $settings; ?>
    <?php print $current_user; ?>
    <?php print $logout; ?>
    <?php print $content; ?>
  </div>
</div>