<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <a id="main-content"></a>
    <?php print render($title_suffix); ?>
    <?php if ($tabs && !empty($tabs['#primary']) && (arg(0) == 'crm-core' && arg(2) != ''	)): ?>
    	<div class="tabs clearfix"><?php print render($tabs); ?></div>
    <?php endif; ?>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <?php print $content; ?>
    <?php if ($feed_icons): ?><div class="feed-icon clearfix"><?php print $feed_icons; ?></div><?php endif; ?>
  </div>
</div>