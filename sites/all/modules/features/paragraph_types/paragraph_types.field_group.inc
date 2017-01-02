<?php
/**
 * @file
 * paragraph_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function paragraph_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_3ol_second|paragraphs_item|three_column|default';
  $field_group->group_name = 'group_3ol_second';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'three_column';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '3col Second',
    'weight' => '1',
    'children' => array(
      0 => 'field_text_second',
      1 => 'field_image_second',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '3col Second',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-3col-second',
        'element' => 'section',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_3ol_second|paragraphs_item|three_column|default'] = $field_group;

  return $export;
}
