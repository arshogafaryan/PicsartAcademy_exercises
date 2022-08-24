#include <iostream>

int main()
{
    float a,b,c,d,min;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    if (a <= b && a <= c && a <= d)
        min = a;
    else if(b <= a && b <= c && b <= d)
        min = b;
    else if(c <= a && c <= b && c <= d)
        min = c;
    else
        min = d;

    if(a + b + c + d == 0)
        std::cout << "Minimum is " << min << std::endl;
    return 0;
}
