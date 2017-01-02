<?php
/**
 * @file
 * paragraph_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paragraph_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function paragraph_types_paragraphs_info() {
  $items = array(
    'call_to_action' => array(
      'name' => 'Call to Action',
      'bundle' => 'call_to_action',
      'locked' => '1',
    ),
    'large_text' => array(
      'name' => 'Large Text',
      'bundle' => 'large_text',
      'locked' => '1',
    ),
    'three_column' => array(
      'name' => 'Three Column',
      'bundle' => 'three_column',
      'locked' => '1',
    ),
    'two_column' => array(
      'name' => 'Two Column',
      'bundle' => 'two_column',
      'locked' => '1',
    ),
    'video_and_text' => array(
      'name' => 'Video and Text',
      'bundle' => 'video_and_text',
      'locked' => '1',
    ),
  );
  return $items;
}
