#include <iostream>

int main()
{
    int a,b;
    char x;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter an operation: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> b;

    if (x == '+')
        std::cout << a + b << std::endl;
    else if (x == '-')
        std::cout << a - b << std::endl;
    else if (x == '*')
        std::cout << a * b << std::endl;
    else if (x == '/')
        std::cout << a / b << std::endl;
    else if (x == '%')
        std::cout << a % b << std::endl;
    else
        std::cout << "Unknown operator\n";
    return 0;
}
