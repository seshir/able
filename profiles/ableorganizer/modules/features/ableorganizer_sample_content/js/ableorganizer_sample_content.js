/**
 * Attaches the debugging behavior.
 */
(function($) {
  Drupal.behaviors.ableorganizer_sample_content = {
    attach: function (context) {
      // front page stuff
      var wwidth  = $('#region-above-content-2').width();
      var wheight = $('#zone-above-content-2-wrapper').height();
      
      console.log(wheight);
      
      $(".ao_profeat_dialog").dialog({ 
          autoOpen: false,
          modal: true,
          closeOnEscape: true,
          draggable: false,
          resizable: false,
          height: wheight,
          width: wwidth,
          effect: 'explode',
          show: {
            effect: 'fade',
            duration: 750,
            easing: 'easeOutQuart',
          },
          hide: {
            effect: 'fade',
            duration: 350,
            easing: 'easeOutQuart',
          },
          open: function() {
            jQuery('.ui-widget-overlay').bind('click', function() {
              jQuery('.ao_profeat_dialog').dialog('close');
            })
          },          
        }
      );
      $('.ui-dialog-titlebar').hide();
      $( ".ao_profeat" ).click(function() {
        var content = $(this).find(".ao_profeat_dialog_content");
        var diag = $(".ao_profeat_dialog");
        diag.html(content.html());
        diag.dialog("open");
      });
      
    }
  };
})(jQuery);