#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void arr_odd_even(int arr[], int len)
{
	for (int i = 0, j = 0; i < len; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			swap(arr[j], arr[i]);
			j++;
		}
	}
	for (int i = 0; i < len; ++i)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {3, 8, 4, 5, 0};
	arr_odd_even(arr, 5);
	return 0;
}
