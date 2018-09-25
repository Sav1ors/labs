function phoneMode(){
	if(document.documentElement.clientWidth < 760){
		$(".navigation").css({"display":"none"});
		$(".drop_navigation").css({"display":"flex"});
	}
	else{
		$(".navigation").css({"display":"flex"});
		$(".drop_navigation").css({"display":"none"});
		$(".dropDown_menu").css({"transition":"0","height":"0"});
		$(".navbar").css({"box-shadow":'0 10px 28px rgba(0,0,0,0.25), 0 10px 10px rgba(0,0,0,0.22)'});
		$(".dropdown_button").css({"background-color":"rgba(0,0,0,0)"});
		$(".dropdown_button").css({"background-image":'none'});
	}
}

phoneMode();

window.addEventListener('resize', function(event){
  phoneMode();
});

function dropDown_anime(){
	if($(".dropDown_menu").css("height") == '0px'){
		$(".dropDown_menu").css({"height":"280px"});
		$(".navbar").css({"box-shadow":"none"});
		$(".dropdown_button").css({"background-image":'url(layer2.png)'});
		$(".stick").css({"display":"none"});
	}
	else {
		$(".dropDown_menu").css({"height":"0"});
		$(".navbar").css({"box-shadow":'0 10px 28px rgba(0,0,0,0.25), 0 10px 10px rgba(0,0,0,0.22)'});
		$(".dropdown_button").css({"background-color":"rgba(0,0,0,0)"});
		$(".stick").css({"display":"block"});
		$(".dropdown_button").css({"background-image":'none'});
	}
}