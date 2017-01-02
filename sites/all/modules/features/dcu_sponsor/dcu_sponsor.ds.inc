<?php
/**
 * @file
 * dcu_sponsor.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dcu_sponsor_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_sponsors' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sponsor|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dcu_sponsor_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        1 => 'body',
        2 => 'field_website',
        3 => 'field_sponsor_level',
        4 => 'back_to_sponsors',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'body' => 'right',
      'field_website' => 'right',
      'field_sponsor_level' => 'right',
      'back_to_sponsors' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|sponsor|default'] = $ds_layout;

  return $export;
}
