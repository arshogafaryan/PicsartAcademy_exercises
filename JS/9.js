const readline = require('readline-sync');
let val = readline.questionInt();
let sum = 0;

while (val) {
    sum += val % 10;
    val = Math.floor(val / 10);
}

console.log(sum);