var page = require('webpage').create();
var fs = require('fs');
var path = "./bittrex-wallet-status/output";

url = "https://bittrex.com/Status";

page.open(url, function(status) {
	if(status !== 'success'){
		console.log("Unable to load the address!");
		console.log(status);
		console.log(page.content)
		phantom.exit(1);
	}else{
		window.setTimeout(function(){
          var content = page.content;
          console.log("save html to " + path);
          fs.touch(path);
          fs.write(path,content,'w');
          phantom.exit(0);
		},15000);
	}
});
