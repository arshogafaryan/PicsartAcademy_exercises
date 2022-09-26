#include <iostream>

void print_even(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] % 2 == 0)
			std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {3, 8, 4, 5, 0};
	print_even(arr, 5);
	return 0;
}
