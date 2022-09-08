#include <iostream>

int binary_search(int arr[], int len, int num)
{
	int start = 0;
	int end = len - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] < num)
		{
			start = mid + 1;
		}
		else if (arr[mid] > num)
		{
			end = mid - 1;
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
	std::cout << "Enter 10 Ascending Order Numbers\n";
	for (int i = 0; i < len; i++)
	{
		std::cout << i << ": ";
		std::cin >> arr[i];
	}
	std::cout << "Enter the target number: ";
	std::cin >> num;
	std::cout << binary_search(arr, len, num) << std::endl;
	return 0;
}
	
