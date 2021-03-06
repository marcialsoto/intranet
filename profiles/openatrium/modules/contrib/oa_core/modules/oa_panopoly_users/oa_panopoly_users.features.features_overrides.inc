<?php
/**
 * @file
 * oa_panopoly_users.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function oa_panopoly_users_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|body_classes_to_add"] = 'oa-login';
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|content|new-36405db8-54c5-495c-ba8a-0a5f7ade185a|configuration|override_title_text"] = 'Log In';
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|hide_title"] = 1;
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|layout"] = 'boxton';
  $overrides["page_manager_handlers.pm_existing_pages_user_login_panel_context.conf|display|panel_settings|contentmain"] = array(
    'style' => 'oa_styles_oa_pane',
  );

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-80a6a21b-20e6-4acf-9772-eb089cc6082b"] = (object) array(
      'pid' => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
      'panel' => 'sidebar',
      'type' => 'oa_core_user_spaces',
      'subtype' => 'oa_core_user_spaces',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'featured_spaces' => 1,
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'image_size' => 'none',
        'show_description' => 0,
        'show_sections' => 0,
        'tabs' => array(
          'Favorite' => 'Favorite',
          'Memberships' => 'Memberships',
          'All' => 0,
        ),
        'link_class' => 'btn',
        'show_links' => 0,
        'num_per_page' => 15,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '80a6a21b-20e6-4acf-9772-eb089cc6082b',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-9def882d-91aa-4313-87b2-0ace29b4329c"] = (object) array(
      'pid' => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_picture',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'image',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'image_style' => 'panopoly_image_full',
          'image_link' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
        'view_mode' => NULL,
        'widget_title' => NULL,
        'items_per_page' => NULL,
        'use_pager' => NULL,
        'pager_id' => NULL,
        'offset' => NULL,
        'link_to_view' => NULL,
        'more_link' => NULL,
        'path' => NULL,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '9def882d-91aa-4313-87b2-0ace29b4329c',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-c068286a-0523-45cb-9190-9cc350ad6845"] = (object) array(
      'pid' => 'new-c068286a-0523-45cb-9190-9cc350ad6845',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'oa_comment_topics-comment_user_topics_replied',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'c068286a-0523-45cb-9190-9cc350ad6845',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395"] = (object) array(
      'pid' => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
      'panel' => 'contentheader',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_about',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'd3a2a9fb-f88a-4730-bfab-c36f4e0af395',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-f34b9365-3769-4c85-9788-bbfa336fdcad"] = (object) array(
      'pid' => 'new-f34b9365-3769-4c85-9788-bbfa336fdcad',
      'panel' => 'contentheader',
      'type' => 'views_panes',
      'subtype' => 'oa_comment_topics-comment_user_topics',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_settings' => 'fields',
        'header_type' => 'none',
        'view_mode' => 'teaser',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'f34b9365-3769-4c85-9788-bbfa336fdcad',
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'selby_flipped';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn1"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn2"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentfooter"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentheader"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader"] = array(
    0 => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
    1 => 'new-c068286a-0523-45cb-9190-9cc350ad6845',
    2 => 'new-f34b9365-3769-4c85-9788-bbfa336fdcad',
    3 => 'new-7e2787f8-3f6c-4b3b-a1bb-e11225e395d5',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar"] = array(
    0 => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
    1 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
  );

 return $overrides;
}
