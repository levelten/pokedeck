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
