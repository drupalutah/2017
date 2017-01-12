<?php

function hive_preprocess_page(&$variables, $hook) {
  // dpm($variables);
  if($variables['is_front']){
    $variables['logo'] = '/'.drupal_get_path('theme','hive').'/logo-large.png';
  }
}


/**
* Returns HTML for primary and secondary local tasks.
*
* @ingroup themeable
*/
function hive_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    // $variables['primary']['#prefix'] = '<div class="tabs--primary-wrapper"><span class="tabs--primary-toggle"><span class="icon"></span>' . t('Manage') . '</span>';
    $variables['primary']['#prefix'] = '<div class="tabs--primary-wrapper">';
    $variables['primary']['#prefix'] .= '<ul class="tabs--primary">';
    $variables['primary']['#suffix'] = '</ul></div>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs tabs--secondary links--inline">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

/**
* Implements hook_preprocess_entity().
*/
function hive_preprocess_entity(&$variables) {
  if ($variables['entity_type'] == 'paragraphs_item') {
    $variables['classes_array'][] = 'paragraphs-item-'.$variables['paragraphs_item']->item_id;
  }
}

// function hive_ds_pre_render_alter(&$layout_render_array, $context, &$vars) {
//   // $layout_render_array['left'][] = array('#markup' => 'cool!', '#weight' => 20);
//   $vars['attributes_array']['class'][] = 'custom';
// }
