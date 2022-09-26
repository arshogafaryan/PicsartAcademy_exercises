#include <iostream>

void print_odd(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] % 2 == 1)
			std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {3, 8, 4, 5, 0};
	print_odd(arr, 5);
	return 0;
}
