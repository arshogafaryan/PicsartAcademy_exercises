const readline = require('readline-sync');
let s = "";
let val1 = readline.question();
let i = 0;
while (val1[i])
{
    s += val1[i] + " ";
    i++;
}
console.log(s);