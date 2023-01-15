const {add} = require('./Nodejs-Napi-Addon-Using-Cmake/build/Release/addon.node'); 
//Calling functions of native addon 
var result = add(3,4); 
//console.log(result);
//communicating with main process of electron app.
postMessage(result);