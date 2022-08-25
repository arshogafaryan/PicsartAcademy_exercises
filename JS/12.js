let s = "";
for(let i = 1, k = 0; i <= 3; i++, k = 0)
{
    for(let sp = i; sp < 3; sp++)
    {
        s = s + " ";
    }
    while(k != 2*i - 1)
    {
        s = s + "*";
        k++;
    }
    s = s + "\n";
}
console.log(s);