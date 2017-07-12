window.onload = function()
{
	document.onkeyup = function(event)
	{
		var e = (!event) ? window.event : event;
		switch(e.keyCode)
		{
			case 37:
				prev = document.getElementById('prev');
				if(prev != null)
					window.location.href = prev.href;
				break;
			case 39:
				next = document.getElementById('next');
				if(next != null)
					window.location.href = next.href;
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
