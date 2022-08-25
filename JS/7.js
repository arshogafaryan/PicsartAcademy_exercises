const readline = require('readline-sync');

let val1 = readline.questionInt();
let val2 = readline.questionInt();

let temp = val1;
val1 = val2;
val2 = temp;

console.log("Swapped val1 and val2: " + val1 + " " + val2);