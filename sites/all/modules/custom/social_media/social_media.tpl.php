
<div class="social-media-icons">
<?php if($social_media_text): ?>
	<p><?php echo $social_media_text ?></p>
<?php endif; ?>

	<ul>
		<?php if($social_media_facebook): ?>
			<li class="sm-facebook"><a href="<?php print $social_media_facebook; ?>" target="_blank" alt="Facebook"><?php if($social_media_fa) { ?><i class="fa fa-facebook-square"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_twitter): ?>
			<li class="sm-twitter"><a href="<?php print $social_media_twitter; ?>" target="_blank" alt="Twitter"><?php if($social_media_fa) { ?><i class="fa fa-twitter-square"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_instagram): ?>
			<li class="sm-instagram"><a href="<?php print $social_media_instagram; ?>" target="_blank" alt="Instagram"><?php if($social_media_fa) { ?><i class="fa fa-instagram"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_google): ?>
			<li class="sm-google"><a href="<?php print $social_media_google; ?>" target="_blank" alt="Google+"><?php if($social_media_fa) { ?><i class="fa fa-google-plus-square"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_youtube): ?>
			<li class="sm-youtube"><a href="<?php print $social_media_youtube; ?>" target="_blank" alt="YouTube"><?php if($social_media_fa) { ?><i class="fa fa-youtube"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_linkedin): ?>
			<li class="sm-linkedin"><a href="<?php print $social_media_linkedin; ?>" target="_blank" alt="LinkedIn"><?php if($social_media_fa) { ?><i class="fa fa-linkedin"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

		<?php if($social_media_slack): ?>
			<li class="sm-email"><a href="<?php print $social_media_slack; ?>" target="_blank" alt="Contact"><?php if($social_media_fa) { ?><i class="fa fa-slack"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>

			<?php if($social_media_email): ?>
			<li class="sm-email"><a href="<?php print $social_media_email; ?>" target="_blank" alt="Contact"><?php if($social_media_fa) { ?><i class="fa fa-envelope-square"></i><?php } else { ?><span class="icon"></span><?php } ?></a></li>
		<?php endif; ?>
	</ul>
</div>


