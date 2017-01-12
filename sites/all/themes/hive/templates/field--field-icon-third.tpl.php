<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
    <?php foreach ($items as $delta => $item): ?>
      <div class="icon <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><i class="fa fa-<?php print render($item); ?>"></i></div>
    <?php endforeach; ?>
</div>
