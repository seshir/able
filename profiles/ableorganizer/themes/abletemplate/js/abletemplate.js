/**
 * Attaches the debugging behavior.
 */
(function($) {
  Drupal.behaviors.abletemplate = {
    attach: function (context) {

      // handles display of meny navigation
      $('body', context).once('able-activate', function(){

        // get the menu expander working
        $('.menu_expander').click(function(){
          $('#region-menu .navigation').toggle();
        });

        // change input formats to buttons
        $check = $('.text-format-wrapper').find('SELECT');
        if ($check.length > 0){
          // check each text filter
          for($i = 0; $i < $check.length; $i++){
            $items = $('#' + $($check[$i]).attr('id') + ' > option').map(function(){
              // gives the value associated with the option
              // gives the displayed value of the option
              $text = $(this).text();
              $value = $(this).val();
              $class ="button text-format-select";
              if ($(this).attr('selected')){
                $class += " active-val";
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

      });
      
    }
  };
})(jQuery);