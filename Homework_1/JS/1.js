const readline = require('readline-sync');

let val1 = readline.questionInt();
let val2 = readline.questionInt();
let val3 = readline.questionInt();

if (val1 >= val2 && val1 >= val3)
{
  console.log("Maximum is: " + val1);
}
else if (val2 >= val1 && val2 >= val3)
{
  console.log("Maximum is: " + val2);
}
else
{
  console.log("Maximum is: " + val3);
}