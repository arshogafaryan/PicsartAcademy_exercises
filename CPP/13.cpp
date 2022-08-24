#include <iostream>

float   mul(float a, float b, float c)
{
    return a * b * c;
}

int main()
{
    int a,b,c;
    std::cout << "Enter 3 numbers:\n";
    std::cin >> a >> b >> c;
    int val = mul(a, b, c);
    std::cout << "The answer is: " << val;
    return 0;
}
