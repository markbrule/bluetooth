jQuery(document).ready( function($) {
    function reload() {
        $('div.planview').each( function() {
	    var div = $(this);
	    $.get('/bt-planview/data-update/' + $(this).attr('id'), '',
	        function(data) { 
		    div.children('div').remove();
		    div.append(data);
		 });
        })
    }

    reload();
    window.setInterval(reload, 5000);
});
