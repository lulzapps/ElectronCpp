//address of native addon 
const {add} = require('../lib/build/Release/MyLib.node'); 

//Calling functions of native addon 
var result = add(3,4); 

console.log("result: " + result);

// //communicating with main process of electron app.
// postMessage(result);