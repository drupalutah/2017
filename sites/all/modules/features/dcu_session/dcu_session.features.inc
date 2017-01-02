<?php
/**
 * @file
 * dcu_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dcu_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dcu_session_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dcu_session_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Create a session proposal that will be reviewed and potentially selected for this upcoming camp. After you create this proposal you are welcome to come back and edit it, so if you don\'t have all the details but want to submit something for now you can.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
