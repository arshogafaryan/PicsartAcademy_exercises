#include <iostream>

int main()
{
	const  int len = 10;
	int count = 0;
	int arr[10];
	std::cout << "Enter 10 numbers. ";
	for (int i = 0; i < len; i++)
	{
		std::cout << i << ": ";
		std::cin >> arr[i];
	}
	
	for (int j = 1; j <= len; j++)
	{
		if (arr[j] % j == 0)
		{
			count++;
		}
	}
	std::cout << "Answer is: " << count << std::endl;
}
