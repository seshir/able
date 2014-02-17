<?php 

function abletemplate_alpha_preprocess_node(&$vars) {
  // custom functionality here
  
  if($vars['type'] === 'cmcev_event'){
    $vars['content']['field_cmcev_date']['#label_display'] = 'hidden';
    $vars['content']['field_cmcev_location']['#label_display'] = 'hidden';
    
  }
  
  
  
}

