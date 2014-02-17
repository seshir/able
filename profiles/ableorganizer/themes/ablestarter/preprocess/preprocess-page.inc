<?php 

function ablestarter_preprocess_page($variables){
  
  // simulates the way alpha loads responsive stylesheets
  // takes the name of any custom stylesheets registered with the theme and adds layout-specific stylesheets for the file
  // this behavior can be toggled on and off for each style sheet
  //
  // a few requirements:
  //
  // 1) the file must be registered with the sub-theme. for example:
  //   css[THEMENAME-filename.css][name] = 'Example file'
  //   css[THEMENAME-filename.css][description] = 'This example file is meant to load responsively.'
  //   css[THEMENAME-filename.css][options][weight] = '11'
  //
  // 2) the file must start with the name of the sub-theme
  //   i.e.: THEMENAME-filename.css, THEMENAME-filename-wide.css, THEMENAME-filename-normal.css, THEMENAME-filename-narrow.css, THEMENAME-filename-mobile.css
  //
  // 3) add an option called 'load_responsive' within the info file for each stylesheet being loaded responsively
  //   i.e.: css[THEMENAME-filename.css][options][load_responsive] = TRUE
  
  // load information about the theme
  global $theme_info;
  
  // this is where we store the files to be loaded
  $files = array();
  
  // get a new theme container with information about the current subtheme
  $item = new alpha_theme_container($theme_info->name);
  
  // get information about the grid and the layouts
  $grid = $item->grid();
  $grids = $item->grids();
  $layouts = array_keys($grids['alpha_default']['layouts']);
  
  // pull out the css and settings to loop around
  $theme = alpha_get_theme();
  $css = $theme->css;
  $settings = $theme->settings;
  
  // create a list of the files that are going to be loaded responsively
  foreach ($settings['css'] as $key => $value){
    $check = strpos($key, $theme->theme);
    if($check !== FALSE && $check == 0 && $value !== 0 && $css[$key]['options']['load_responsive'] == TRUE){
      $files[] = str_replace('.css', '', $key);
    }
  }

  // loop around the files. Create a responsive version of each for each layout.
  if(sizeof($files) > 0){
    foreach ($layouts as $layout){
      foreach ($files as $file){
        $item = drupal_get_path('theme', $theme->theme) . '/css/' . $file . '-' . $layout . '.css';
        $basename = $layout . '::' . drupal_get_path('theme', $theme->theme) . '/' . $file . '-' . $layout . '.css';
        $options = array(
          'group' => 2000,
          'weight' => 1,
          'data' => $item, 
          'basename' => $basename,
          'media' => $grids['alpha_default']['layouts'][$layout]['media'],
          'browsers' => array(
            'IE'	=> 'gte IE9',
            '!IE'	=> TRUE,
          ),
          'preprocess_media' => TRUE,
        );
        drupal_add_css($item, $options);
      }
    }
  }
  
}
