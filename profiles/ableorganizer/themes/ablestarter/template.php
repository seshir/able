<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements theme_breadcrumb
 */
function ablestarter_breadcrumb($variables) {
	
	$breadcrumb = $variables['breadcrumb'];
	
	// so, for our breadcrumb trail
	// - home should always point back to crm-core
	
	$home = l('Home', 'crm-core');
	$crumbs = '';
	
	if (!empty($breadcrumb) && sizeof($breadcrumb) > 2) {
		$crumbs = '<ul class="breadcrumbs">';
		$crumbs .= '<li class="cmc_home">'.$home.'</li>';
		foreach($breadcrumb as $value) {
			if((strpos($value, 'crm-core"') == 0) && (strpos($value, '>Home<') == 0)){
				if((strpos($value, 'a href'))){
					$crumbs .= '<li>'.$value.'<div class="bc_arrow"></div></li>';
				} else {
					$crumbs .= '<li>'.$value.'</li>';
				}
			}
		}
		$crumbs .= '</ul>';
	}
	
	return $crumbs;
	
}

function ablestarter_menu_link($variables) {
  dpm('yo yo yo');
  //add class for li
   $variables['element']['#attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];
   //add class for a
   $variables['element']['#localized_options']['attributes']['class'][] = 'menu-' . $variables['element']['#original_link']['mlid'];
   //dvm($variables['element']);
  return theme_menu_link($variables);
}
/**
 * Displays links for the main menu
 * @param array $variables
 */
function ablestarter_links__system_main_menu($variables) {
  
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page())) && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';

      }
      
      // add a unique class with the content of the field for theming
      $unique_class = strtolower($link['title']);
      $unique_class = preg_replace('@[^a-z0-9_]+@','_',$unique_class);
      $class[] = 'ao_' . $unique_class;
      
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= '<div class="nav_menu_icon"></div>' . l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . '<div class="nav_menu_icon"></div>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}



/**
 * Theming for local actions
 */
function ablestarter_menu_local_action ($variables){
	
	$link = $variables['element']['#link'];
	$class = strtolower(preg_replace(array(
			'/[^a-zA-Z0-9]+/',
			'/-+/',
			'/^-+/',
			'/-+$/',
	), array('-', '-', '', ''), $link['title']));
	$class .= ' btn btn-orange btn-simple';
	
	$output = '<li class="' . $class . '"><div class="action_link_icon"></div>';
	if (isset($link['href'])) {
		$output .= l($link['title'], $link['href'], isset($link['localized_options']) ? $link['localized_options'] : array());
	}
	elseif (!empty($link['localized_options']['html'])) {
		$output .= $link['title'];
	}
	else {
		$output .= check_plain($link['title']);
	}
	$output .= "</li>\n";
	
	return $output;	
	
}

/**
 * Theming for primary tabs
 */
function ablestarter_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class="tabs-wrapper"><span>' . t('Navigate') . '</span><div><ul class="tabs links primary">';
    $variables['primary']['#suffix'] = '</ul></div></div>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

/**
 * Preprocessing information for the reports page
 */

function ablestarter_preprocess_crm_core_report_index(&$variables) {
	
	$report_items = array();
	$reports = $variables['reports'];
	
	$variables['column_a'] = array();
	$variables['column_b'] = array();
	
	if (!empty($reports)) {
		foreach ($reports as $key => $item) {
			$items = array();
			foreach ($item['reports'] as $report) {
				$items[] = l($report['title'], $report['path']) . '<br />' . $report['description'];
			}
			if($key == 'cmcd' || $key == 'cmcd-donors' || $key == 'cmcev'){
				$variables['column_a'][] = theme('item_list', array(
					'items' => $items,
					'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			} else {
				$variables['column_b'][] = theme('item_list', array(
						'items' => $items,
						'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			}
		}
	}
	
	
	
}

/**
 * Returns HTML for a button form element.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #attributes, #button_type, #name, #value.
 *
 * @ingroup themeable
 */
function ablestarter_button($variables) {
  $element = $variables['element'];
  
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }
  $element['#attributes']['class'][] = 'btn';

  // dpm($element);

  if($element['#value'] == 'Reset' || $element['#value'] == 'Apply' ){
    $element['#attributes']['class'][] = 'btn-blue';
    $element['#attributes']['class'][] = 'btn-simple';
  } else if($element['#value'] == 'Delete' ){
    $element['#attributes']['class'][] = 'btn-red';
    $element['#attributes']['class'][] = 'btn-simple';
  	$element['#attributes']['class'][] = 'btn-large';
  } else if($element['#value'] == 'Save Individual' ){
    $element['#attributes']['class'][] = 'btn-green';
    $element['#attributes']['class'][] = 'btn-simple';
  	$element['#attributes']['class'][] = 'btn-large';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

function ablestarter_submit($variables) {
  $variables['element']['#attributes']['class'][] = 'btn-purple';
  return theme('button', $variables['element']);  
}
