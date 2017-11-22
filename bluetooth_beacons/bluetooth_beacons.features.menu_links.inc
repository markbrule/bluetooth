<?php
/**
 * @file
 * bluetooth_beacons.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bluetooth_beacons_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_beacon-details:beacons.
  $menu_links['main-menu_beacon-details:beacons'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'beacons',
    'router_path' => 'beacons',
    'link_title' => 'Beacon Details',
    'options' => array(
      'attributes' => array(
        'title' => 'A list of all the beacons that have been detected ',
      ),
      'identifier' => 'main-menu_beacon-details:beacons',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'main-menu_receivers:manage-receivers',
  );
  // Exported menu link: main-menu_manage-receivers:manage-receivers.
  $menu_links['main-menu_manage-receivers:manage-receivers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage-receivers',
    'router_path' => 'manage-receivers',
    'link_title' => 'Manage Receivers',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage configuration and detection activity of receivers',
      ),
      'identifier' => 'main-menu_manage-receivers:manage-receivers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_receivers:manage-receivers',
  );
  // Exported menu link: main-menu_receiver-details:receiver-details.
  $menu_links['main-menu_receiver-details:receiver-details'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'receiver-details',
    'router_path' => 'receiver-details',
    'link_title' => 'Receiver Details',
    'options' => array(
      'attributes' => array(
        'title' => 'Details of the different receivers',
      ),
      'identifier' => 'main-menu_receiver-details:receiver-details',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_receivers:manage-receivers',
  );
  // Exported menu link: main-menu_receivers:manage-receivers.
  $menu_links['main-menu_receivers:manage-receivers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage-receivers',
    'router_path' => 'manage-receivers',
    'link_title' => 'Receivers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_receivers:manage-receivers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beacon Details');
  t('Manage Receivers');
  t('Receiver Details');
  t('Receivers');

  return $menu_links;
}
