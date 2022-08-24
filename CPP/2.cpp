#include <iostream>

int main()
{
    float a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a <= b && a <= c)
        std::cout << "Minimum is " << a << std::endl;
    else if(b <= a && b <= c)
        std::cout << "Minimum is " << b << std::endl;
    else
        std::cout << "Minimum is " << c << std::endl;
    return 0;
}
