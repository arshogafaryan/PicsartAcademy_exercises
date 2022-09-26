#include <iostream>

void arr_odd(int arr1[], int len)
{
	int arr2[len];
	int count = 0;
	for (int i = 0, j = 0; i < len; ++i)
	{
		if (arr1[i] % 2 == 1)
		{
			arr2[j] = arr1[i];
			j++;
			count++;
		}
	}
	for (int i = 0; i < count; ++i)
	{
		std::cout << arr2[i] << " ";
	}
}

int main()
{
	int arr[] = {3, 8, 4, 5, 0};
	arr_odd(arr, 5);
	return 0;
}
