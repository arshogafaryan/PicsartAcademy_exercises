#include <iostream>

int main
()
{
    int a,sum;
    sum = 1;
    std::cin >> a;
    int b = a;
    while (a / 10 != 0)
    {
        sum *= 10; 
        a = a / 10;
    }

    while (sum != 0)
    {
        std::cout << b / sum;
        b %= sum;
        sum /= 10;
        std::cout << ", ";
    }
    return 0;
}
