<?php

/**
 * @file
 * Admin page callbacks for the Pets Saved module.
 * Configure Pets Saved settings.
 *
 */

function social_media_admin_settings() {


	$form = array();

	$form['social_media_title'] = array(
		'#type' => 'textfield',
		'#title' => t('Block Title'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_title', 'Follow Us'),
		'#description' => t("The title of the block can be changed here."),
		'#required' => TRUE,
		);

	$form['social_media_text'] = array(
		'#type' => 'textfield',
		'#title' => t('Short description'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_text', ''),
		'#description' => t("A brief description that appears below the title. Max 255 characters"),
		// '#required' => TRUE,
		);

	$form['social_media_facebook'] = array(
		'#type' => 'textfield',
		'#title' => t('Facebook'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_facebook', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_twitter'] = array(
		'#type' => 'textfield',
		'#title' => t('Twitter'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_twitter', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_linkedin'] = array(
		'#type' => 'textfield',
		'#title' => t('LinkedIn'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_linkedin', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_youtube'] = array(
		'#type' => 'textfield',
		'#title' => t('YouTube'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_youtube', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_instagram'] = array(
		'#type' => 'textfield',
		'#title' => t('Instagram'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_instagram', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_google'] = array(
		'#type' => 'textfield',
		'#title' => t('Google+'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_google', ''),
		'#description' => t("The direct link to the social media account."),
		// '#required' => TRUE,
		);

	$form['social_media_email'] = array(
		'#type' => 'textfield',
		'#title' => t('Email/Contact'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_email', ''),
		'#description' => t("The link to the contact form or a mailto: link"),
		// '#required' => TRUE,
		);
	$form['social_media_slack'] = array(
		'#type' => 'textfield',
		'#title' => t('Slack'),
		'#size' => 60,
		'#maxlength' => 255,
		'#default_value' => variable_get('social_media_slack', ''),
		'#description' => t("The link to Slack invite bot or Slack login"),
		// '#required' => TRUE,
		);

	$form['social_media_fa'] = array(
		'#type' => 'checkbox',
		'#title' => t('Use Font Awesome'),
		'#default_value' => variable_get('social_media_fa', ''),
		'#description' => t("Actual font must be provided via the theme or other module."),
		// '#required' => TRUE,
		);

	return system_settings_form($form);

}
