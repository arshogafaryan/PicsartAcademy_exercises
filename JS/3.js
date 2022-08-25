const readline = require('readline-sync');

let val1 = readline.questionInt();
let val2 = readline.questionInt();
let val3 = readline.questionInt();
let val4 = readline.questionInt();
if (val1 + val2 + val3 + val4 === 0)
{
    if (val1 <= val2 && val1 <= val3 && val1 <= val4)
    {
      console.log("Minimum is: " + val1);
    }
    else if (val2 <= val1 && val2 <= val3 && val2 <= val4)
    {
      console.log("Minimum is: " + val2);
    }
    else if (val3 <= val1 && val3 <= val2 && val3 <= val4)
    {
      console.log("Minimum is: " + val3);
    }
    else
    {
      console.log("Minimum is: " + val4);
    }
}