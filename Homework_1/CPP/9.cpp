#include <iostream>

int main()
{
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    std::cout << "Sum of digits: " << sum << std::endl;
    return 0;
}

