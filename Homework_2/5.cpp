#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void	sort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
}

int main()
{
	const int len = 10;
	int arr[len];
	std::cout << "Enter 10 numbers.\n";
	for (int x = 0; x < len; x++)
	{
		std::cout << x << ": ";
		std::cin >> arr[x];
	}
	sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
