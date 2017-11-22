jQuery(document).ready( function($) {
    function updateCurrentEdit() {
	var s = $('select[name="sensor"]').find(":selected").text();
	var sid = $('select[name="sensor"]').find(":selected").attr('value');
	$('span#current-edit')
	    .attr("value", sid)
	    .text(s);
	resetSensorIcons();
    }

    function reload() {
        $('div.planview').each( function() {
	    var div = $(this);
	    $.get('/bt-planview/data-update/' + $(this).attr('id'), '',
	        function(data) { 
		    div.children('div').remove();
		    div.append(data.replace(/<br\/>.*?<\/span>/g,'</span>'));
		    resetSensorIcons();
		 });
        })
    }

    function resetSensorIcons() {
	$('img.sensor-object').attr('src', '/sites/all/modules/bluetooth/bt_planview/images/edit-loc-placed.jpg');
	var cid = $('span#current-edit').attr('value');
	$('div.hover-object#' + cid + ' img')
	    .attr('src', '/sites/all/modules/bluetooth/bt_planview/images/edit-loc-selected.jpg');
    }

    $('div.planview').click( function(e) {
	var parentOffset = $(this).parent().offset();
	var x = parseInt(e.pageX - parentOffset.left);
	var y = parseInt(e.pageY - parentOffset.top);
	var m = $("div.planview").attr("id");
	var s = $("span#current-edit").attr("value");
	$.get('/bt-planview/update-location/' + m + '/' + s + '/' + x + '/' + y, '',
	      function(data) {
		  if (data == "SUCCESS")
		      reload();
		  else
		      alert(data);
	      })
    });

    $('select[name="sensor"]').change( function(e) {
	updateCurrentEdit();
    });

    reload();
});
