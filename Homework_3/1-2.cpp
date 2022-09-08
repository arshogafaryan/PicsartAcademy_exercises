#include <iostream>

int binary_search(int arr[], int start, int end, int num)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] < num)
		{
			start = mid + 1;
			return (binary_search(arr, start, end, num));
		}
		else if (arr[mid] > num)
		{
			end = mid - 1;
			return (binary_search(arr, start, end, num));
		}
		else
			return (mid);
	}
	std::cout << "This number is not present in array\n";
	return -1;
}

	int main()
{
	int num;
	const int len = 10;
	int arr[len];
	int start = 0;
	int end = len - 1;
	std::cout << "Enter 10 Ascending Order Numbers\n";
	for (int i = 0; i < len; i++)
	{
		std::cout << i << ": ";
		std::cin >> arr[i];
	}
	std::cout << "Enter the target number: ";
	std::cin >> num;
	std::cout << binary_search(arr, start, end, num) << std::endl;
	return 0;
}
	
