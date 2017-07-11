window.onload = function()
{
	document.onkeyup = function(event)
	{
		var e = (!event) ? window.event : event;
		switch(e.keyCode)
		{
			case 37:
				window.location.href = document.getElementById('prev').href;
				break;
			case 39:
				window.location.href = document.getElementById('next').href;
				break;
			case 38:
				window.location.href = document.getElementById('return').href;
				break;
		}

	};
};
//show type bonus tag on moves with the same type as the pokemon using it
jQuery(document).ready(function($){
	//each type of the pokemon
	$('.field-name-type-color-label').children().each(function(){
		var type = '.move-type-' + $(this).html();
		$(type).find('.type-bonus').removeClass('hidden');
	});
});
