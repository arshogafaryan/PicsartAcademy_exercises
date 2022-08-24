#include <iostream>

int main()
{
    int a,b;
    std::cout << "a:";
    std::cin >> a;
    std::cout << "b:";
    std::cin >> b;
    int temp;
    
    temp = a;
    a = b;
    b = temp;

    std::cout << "Swapped a and b: " << a << ", " << b << std::endl;
    return 0;
}
