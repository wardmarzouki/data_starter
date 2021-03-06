<?php
/**
 * @file
 * custom_config.features.features_master.inc
 */

/**
 * Implements hook_features_master_defaults().
 */
function custom_config_features_master_defaults() {
  $features_master = array();

  $features_master['modules'] = array(
    'admin_menu' => 'admin_menu',
    'admin_menu_toolbar' => 'admin_menu_toolbar',
    'autocomplete_deluxe' => 'autocomplete_deluxe',
    'beautytips' => 'beautytips',
    'block' => 'block',
    'bueditor' => 'bueditor',
    'chosen' => 'chosen',
    'colorizer' => 'colorizer',
    'contextual' => 'contextual',
    'ctools' => 'ctools',
    'custom_config' => 'custom_config',
    'data' => 'data',
    'date' => 'date',
    'date_api' => 'date_api',
    'date_popup' => 'date_popup',
    'dblog' => 'dblog',
    'defaultconfig' => 'defaultconfig',
    'diff' => 'diff',
    'dkan' => 'dkan',
    'dkan_dataset' => 'dkan_dataset',
    'dkan_dataset_content_types' => 'dkan_dataset_content_types',
    'dkan_dataset_groups' => 'dkan_dataset_groups',
    'dkan_datastore' => 'dkan_datastore',
    'dkan_datastore_api' => 'dkan_datastore_api',
    'dkan_default_content' => 'dkan_default_content',
    'dkan_featured_groups' => 'dkan_featured_groups',
    'dkan_sitewide' => 'dkan_sitewide',
    'dkan_sitewide_demo_front' => 'dkan_sitewide_demo_front',
    'dkan_sitewide_menu' => 'dkan_sitewide_menu',
    'dkan_sitewide_panels' => 'dkan_sitewide_panels',
    'dkan_sitewide_roles_perms' => 'dkan_sitewide_roles_perms',
    'dkan_sitewide_search_db' => 'dkan_sitewide_search_db',
    'dkan_sitewide_user' => 'dkan_sitewide_user',
    'double_field' => 'double_field',
    'draggableviews' => 'draggableviews',
    'entity' => 'entity',
    'entity_rdf' => 'entity_rdf',
    'entity_token' => 'entity_token',
    'entityreference' => 'entityreference',
    'entityreference_filter' => 'entityreference_filter',
    'eva' => 'eva',
    'facetapi' => 'facetapi',
    'facetapi_bonus' => 'facetapi_bonus',
    'facetapi_pretty_paths' => 'facetapi_pretty_paths',
    'features' => 'features',
    'features_banish' => 'features_banish',
    'features_master' => 'features_master',
    'feeds' => 'feeds',
    'feeds_field_fetcher' => 'feeds_field_fetcher',
    'feeds_flatstore_processor' => 'feeds_flatstore_processor',
    'field' => 'field',
    'field_group' => 'field_group',
    'field_group_table' => 'field_group_table',
    'field_sql_storage' => 'field_sql_storage',
    'field_ui' => 'field_ui',
    'fieldable_panels_panes' => 'fieldable_panels_panes',
    'file' => 'file',
    'file_entity' => 'file_entity',
    'filefield_sources' => 'filefield_sources',
    'filter' => 'filter',
    'fontyourface' => 'fontyourface',
    'fontyourface_ui' => 'fontyourface_ui',
    'geofield' => 'geofield',
    'geophp' => 'geophp',
    'google_fonts_api' => 'google_fonts_api',
    'gravatar' => 'gravatar',
    'honeypot' => 'honeypot',
    'image' => 'image',
    'imagecache_actions' => 'imagecache_actions',
    'imagecache_canvasactions' => 'imagecache_canvasactions',
    'job_scheduler' => 'job_scheduler',
    'jquery_update' => 'jquery_update',
    'leaflet_widget' => 'leaflet_widget',
    'libraries' => 'libraries',
    'link' => 'link',
    'link_iframe_formatter' => 'link_iframe_formatter',
    'list' => 'list',
    'manualcrop' => 'manualcrop',
    'markdown' => 'markdown',
    'markdowneditor' => 'markdowneditor',
    'media' => 'media',
    'media_internet' => 'media_internet',
    'media_vimeo' => 'media_vimeo',
    'media_youtube' => 'media_youtube',
    'menu' => 'menu',
    'menu_block' => 'menu_block',
    'module_filter' => 'module_filter',
    'multistep' => 'multistep',
    'node' => 'node',
    'number' => 'number',
    'og' => 'og',
    'og_access' => 'og_access',
    'og_context' => 'og_context',
    'og_extras' => 'og_extras',
    'og_moderation' => 'og_moderation',
    'og_ui' => 'og_ui',
    'open_data_schema_ckan' => 'open_data_schema_ckan',
    'open_data_schema_map' => 'open_data_schema_map',
    'open_data_schema_map_dkan' => 'open_data_schema_map_dkan',
    'open_data_schema_pod' => 'open_data_schema_pod',
    'options' => 'options',
    'page_manager' => 'page_manager',
    'panels' => 'panels',
    'panels_ipe' => 'panels_ipe',
    'panopoly_images' => 'panopoly_images',
    'panopoly_widgets' => 'panopoly_widgets',
    'path' => 'path',
    'path_breadcrumbs' => 'path_breadcrumbs',
    'path_breadcrumbs_ui' => 'path_breadcrumbs_ui',
    'pathauto' => 'pathauto',
    'r4032login' => 'r4032login',
    'radix_layouts' => 'radix_layouts',
    'rdf' => 'rdf',
    'rdfui' => 'rdfui',
    'rdfx' => 'rdfx',
    'recline' => 'recline',
    'ref_field_sync' => 'ref_field_sync',
    'remote_file_source' => 'remote_file_source',
    'remote_stream_wrapper' => 'remote_stream_wrapper',
    'rest_server' => 'rest_server',
    'restws' => 'restws',
    'rules' => 'rules',
    'rules_admin' => 'rules_admin',
    'search_api' => 'search_api',
    'search_api_db' => 'search_api_db',
    'search_api_facetapi' => 'search_api_facetapi',
    'search_api_views' => 'search_api_views',
    'select_or_other' => 'select_or_other',
    'services' => 'services',
    'simple_gmap' => 'simple_gmap',
    'strongarm' => 'strongarm',
    'system' => 'system',
    'tablefield' => 'tablefield',
    'taxonomy' => 'taxonomy',
    'text' => 'text',
    'token' => 'token',
    'update' => 'update',
    'user' => 'user',
    'uuid' => 'uuid',
    'views' => 'views',
    'views_autocomplete_filters' => 'views_autocomplete_filters',
    'views_bulk_operations' => 'views_bulk_operations',
    'views_content' => 'views_content',
    'views_responsive_grid' => 'views_responsive_grid',
    'views_ui' => 'views_ui',
  );

  return $features_master;
}
