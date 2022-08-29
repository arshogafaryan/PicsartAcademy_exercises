#include <iostream>

int fib(int index)
{
	if (index <= 1)
		return index;
	else
		return fib(index - 1) + fib(index - 2);
}

int main()
{
	long sum = 0;
	int i = 0;
	while (fib(i) < 4000000)
	{
		if (fib(i) % 2 == 0)
		{
			sum += fib(i);
		}
		i++;
	}
	std::cout << sum << std::endl;
}
