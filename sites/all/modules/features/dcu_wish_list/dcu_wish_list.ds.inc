<?php
/**
 * @file
 * dcu_wish_list.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dcu_wish_list_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wish|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wish';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
    'rate_integration_1' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|wish|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wish|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wish';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'ds_user_picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
    'rate_integration_1' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|wish|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dcu_wish_list_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wish|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wish';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'ds_user_picture',
        2 => 'author',
        3 => 'rate_integration_1',
      ),
      'footer' => array(
        4 => 'links',
        5 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'middle',
      'ds_user_picture' => 'right',
      'author' => 'right',
      'rate_integration_1' => 'right',
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
  $export['node|wish|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wish|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wish';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
      ),
      'right' => array(
        3 => 'ds_user_picture',
        4 => 'author',
        5 => 'rate_integration_1',
      ),
    ),
    'fields' => array(
      'title' => 'middle',
      'body' => 'middle',
      'node_link' => 'middle',
      'ds_user_picture' => 'right',
      'author' => 'right',
      'rate_integration_1' => 'right',
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
  $export['node|wish|teaser'] = $ds_layout;

  return $export;
}
