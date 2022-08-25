const readline = require('readline-sync');
let val1 = readline.questionInt("Enter a number: ");
let op = readline.question("Enter an operation: ");
let val2 = readline.questionInt("Enter another number: ");

if (op === '+')
    console.log(val1 + val2);
else if (op === '-')
    console.log(val1 - val2);
else if (op === '*')
    console.log(val1 *val2);
else if (op === '/')
    console.log(val1 / val2);
else if (op === '%')
    console.log(val1 % val2);
else
    console.log("Unknown operation");