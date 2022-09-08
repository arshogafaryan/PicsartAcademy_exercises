#include <iostream>
#include <map>

int my_sum(int a, int b)
{
	return a + b;
}

int my_sub(int a, int b)
{
	return a - b;
}

int my_mul(int a, int b)
{
	return a * b;
}

int my_div(int a, int b)
{
	if (b == 0)
		std::cout << "Division by zero\n";
	return a / b;
}

typedef int (*f)(int, int);
int calculator(int n1, int n2, char op)
{
	int result = 0;
	std::map<char, f> cal;
	
	cal['+'] = my_sum;
	cal['-'] = my_sub;
	cal['*'] = my_mul;
	cal['/'] = my_div;
	
	auto it = cal.find(op);
	if (it != cal.end())
		result = it->second(n1, n2);
	else
		std::cout << "Not found\n";
	return result;
}

int main()
{
	int n1, n2;
	char op;
	std::cout << "Enter two numbers and an operation:\n ";
	std::cin >> n1 >> n2 >> op;
	int result = calculator(n1, n2, op);
	std::cout << result << std::endl;
	return 0;
}
