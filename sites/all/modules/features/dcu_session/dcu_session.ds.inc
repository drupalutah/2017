<?php
/**
 * @file
 * dcu_session.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dcu_session_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|session|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'ds_user_picture' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['node|session|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dcu_session_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'body',
        1 => 'field_attachments',
        2 => 'field_links',
      ),
      'right' => array(
        3 => 'ds_user_picture',
        4 => 'author',
        5 => 'field_status',
        6 => 'field_experience_level',
        7 => 'field_track',
      ),
      'footer' => array(
        8 => 'links',
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'middle',
      'field_attachments' => 'middle',
      'field_links' => 'middle',
      'ds_user_picture' => 'right',
      'author' => 'right',
      'field_status' => 'right',
      'field_experience_level' => 'right',
      'field_track' => 'right',
      'links' => 'footer',
      'comments' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|session|default'] = $ds_layout;

  return $export;
}
