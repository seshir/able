/**
 * Attaches the debugging behavior.
 */
(function($) {
  Drupal.behaviors.ableStarter = {
    attach: function (context) {
      // handles display of meny navigation
      $('body', context).once('able-activate', function(){
        
        // get the menu expander working
        $('.menu_expander').click(function(){
          $('#region-menu .navigation').toggle();
        });

        $('#zone-branding-wrapper .navigation .element-invisible').click(function(){
          $('#zone-branding-wrapper .navigation #main-menu').toggle();
        });

        // change input formats to buttons
        $check = $('.text-format-wrapper').find('SELECT');
        if($check.length > 0){
          // check each text filter
          for($i = 0; $i < $check.length; $i++){
            $items = $('#' + $($check[$i]).attr('id') + ' > option').map(function(){
              // gives the value associated with the option
              // gives the displayed value of the option
              $text = $(this).text();
              $value = $(this).val();
              $class="text-format-select";
              if($(this).attr('selected')){
                $class = "text-format-select active-val";
              }
              $new_item = $(this).parent().before('<div class="' + $class + '" name="' + $value + '">' + $text + '</div>');
            });
          }
          // this is where the onclick event will go
          $('.text-format-select').click(function(){
              // set the value of the select list based on what the person selected
              $select = $(this).parent().find('SELECT');
              $value = $(this).attr('name');
              $select.val($value);
              // get all the other selects around this one and make them not selected
              $(this).parent().find('.text-format-select').removeClass('active-val');
              // then make this one selected
              $(this).addClass('active-val');
          });
        }        
        
        // add buttons for views bulk operations
        // check to see if VBO is present on the form
        var vbo = $('.vbo-views-form');
        
        // if so, create a menu that will display the options for the VBO
        if(vbo.length > 0){
          var vbo_wrapper = vbo.find('FIELDSET');
          var vbo_opts = vbo.find('SELECT > OPTION');
          if(vbo_opts.length > 0){
            var menu_opts = '';
            // get all the options for the bulk operation
            vbo_opts.each(function(idx, val){
              var item = $(val).text();
              if(item.indexOf('Choose') < 0){
                menu_opts += '<li><a href="#">' + item + '</a></li>';
              }
            });
            
            // add the button for VBO to the form
            var new_btn = '<div class="btn btn-simple btn-green btn-vbo btn-expand-right btn-disabled">With Selected<div class="btn-expandable"><ul class="links">' + menu_opts + '</ul></div></div>';
            $('.view-header').prepend(new_btn);
            console.log('yo yo yo');
            console.log($('.view-header').length);
            
            // disable the button until something is clicked
            var menu = $('.btn-vbo > DIV');
            
            // toggle btn-expander class on the button when checkboxes are selected
            var checkboxes = vbo.find('.vbo-select, .vbo-table-select-all');
            checkboxes.bind('click', function(){
              var selected = 0;
              if($(this).attr('checked') == true){
                selected = 1;                
              }
              if(selected == 1){
                $('.btn-vbo').removeClass('btn-disabled');
                $('.btn-vbo').addClass('btn-expander');
              } else {
                $('.btn-vbo').addClass('btn-disabled');
                $('.btn-vbo').removeClass('btn-expander');
              }
            });
            
            // add a click event that selects the option and submits the form
            var menu_items = $('.btn-vbo > DIV > UL > LI > A');
            menu_items.click(function(){
              var thisitem = $(this);
              var action = vbo.find('SELECT > OPTION');
              var sub = vbo.find('.form-submit');
              action.each(function(){
                if ($(this).text() == thisitem.text()){
                  $(this).attr('selected', true);
                  sub.click();
                }
              });
            });
          }
        }

        // detect page reloads
        $(window).resize(function() {
          var height = $('#admin-menu').height();
          var window_width = $(window).width();
          $('body.admin-menu').attr('style', 'margin-top: ' + height + 'px !important;');

          // detects mobile resolution and turn tabs to dropdown menu
          if (window_width < 760) {
            $('.tabs-wrapper').addClass('btn btn-simple btn-green btn-vbo btn-expand-right btn-expander tabs-primary')
              .find('> div').addClass('btn-expandable')
              .parents('.tabs').removeClass('tabs')
              .find('.tabs').removeClass('tabs primary');
          } else {
            $('.tabs-wrapper').removeClass('btn btn-simple btn-green btn-vbo btn-expand-right btn-expander tabs-primary')
              .find('> div').removeClass('btn-expandable').addClass('tabs')
              .parent('div').addClass('tabs')
              .find('.links').addClass('tabs primary');
          }
        });

      });

    }
  };
})(jQuery);