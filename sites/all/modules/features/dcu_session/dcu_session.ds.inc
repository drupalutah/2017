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
    'back_to_sessions' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
    'rate_integration_2' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
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
        1 => 'rate_integration_2',
        2 => 'field_attachments',
        3 => 'field_links',
      ),
      'right' => array(
        4 => 'ds_user_picture',
        5 => 'author',
        6 => 'field_status',
        7 => 'field_experience_level',
        8 => 'field_category',
        9 => 'field_track',
        10 => 'back_to_sessions',
        11 => 'flag_spam',
      ),
      'footer' => array(
        12 => 'links',
        13 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'middle',
      'rate_integration_2' => 'middle',
      'field_attachments' => 'middle',
      'field_links' => 'middle',
      'ds_user_picture' => 'right',
      'author' => 'right',
      'field_status' => 'right',
      'field_experience_level' => 'right',
      'field_category' => 'right',
      'field_track' => 'right',
      'back_to_sessions' => 'right',
      'flag_spam' => 'right',
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
  );
  $export['node|session|default'] = $ds_layout;

  return $export;
}
