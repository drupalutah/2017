<?php
/**
 * @file
 * dcu_sponsor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dcu_sponsor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_sponsor_level'.
  $permissions['create field_sponsor_level'] = array(
    'name' => 'create field_sponsor_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sponsor content'.
  $permissions['create sponsor content'] = array(
    'name' => 'create sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sponsor content'.
  $permissions['delete any sponsor content'] = array(
    'name' => 'delete any sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sponsor content'.
  $permissions['delete own sponsor content'] = array(
    'name' => 'delete own sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sponsor content'.
  $permissions['edit any sponsor content'] = array(
    'name' => 'edit any sponsor content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_sponsor_level'.
  $permissions['edit field_sponsor_level'] = array(
    'name' => 'edit field_sponsor_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sponsor_level'.
  $permissions['edit own field_sponsor_level'] = array(
    'name' => 'edit own field_sponsor_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sponsor content'.
  $permissions['edit own sponsor content'] = array(
    'name' => 'edit own sponsor content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_sponsor_level'.
  $permissions['view field_sponsor_level'] = array(
    'name' => 'view field_sponsor_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sponsor_level'.
  $permissions['view own field_sponsor_level'] = array(
    'name' => 'view own field_sponsor_level',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
