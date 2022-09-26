#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void	selection_sort(int arr[], int len)
{
	int min;
	for (int i = 0; i < len - 1; i++)
	{
		min = arr[i];
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main()
{
	int arr[7] = {10, 3, 7, 8, 1, 2, 5};
	selection_sort(arr, 7);
	std::cout << arr[1] << std::endl;
	return 0;
}
