<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <div class="branding-data clearfix">
      <?php if ($logo): ?>
        <div class="logo-img">
            <a href="<?php print base_path(); ?>crm-core" title=""><img src="<?php print $logo; ?>" alt="" /></a>
        </div>
      <?php endif; ?>
	    <?php if ($main_menu || $secondary_menu): ?>
		    <nav class="navigation">
		      <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix', 'main-menu')), 'heading' => array('text' => t('Main menu'),'level' => 'h2','class' => array('element-invisible')))); ?>
		    </nav>
	    <?php endif; ?>
    </div>
    <?php print $content; ?>
  </div>
</div>