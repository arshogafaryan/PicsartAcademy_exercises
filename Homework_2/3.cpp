#include <iostream>

int main()
{
	const int len = 10;
	int arr[len];
	int sum = 0;
	int mul = 0;
	std::cout << "Enter 10 numbers.\n";
	for (int x = 0; x < len; x++)
	{
		std::cout << x << ": ";
		std::cin >> arr[x];
	}
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 != 0 && mul == 0)
			mul = 1;
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
		else
		{
			mul *= arr[i];
		}
	}
	std::cout << sum - mul << std::endl;
}



