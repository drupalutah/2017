<?php
/**
 * @file
 * dcu_wish_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dcu_wish_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dcu_wish_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dcu_wish_list_node_info() {
  $items = array(
    'wish' => array(
      'name' => t('Wish'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('I wish for...'),
      'help' => t('What session do wish to see at Drupal Camp? Tell everyone and write a summary of what you think it should be about.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
