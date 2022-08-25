let s = "";
for(let i = 1, k = 0; i <= 3; i++, k = 0)
{
    s = s + "\n";
    for(let sp = i; sp < 3; sp++)
    {
        s = s + " ";
    }
    while(k != 2*i - 1)
    {
        s = s + "*";
        k++;
    }
}
let c = "";
for(let i = 0; i <= 30; i++)
{
    if(i % 6 === 0)
        c += "\n";
    else
        c+= "*";
}
console.log(s + c);