#include <iostream>

bool is_meet(int arr[], int index)
{
	int j = 0;
	while(j < index)
	{
		if (arr[j] == arr[index])
			return true;
		j++;
	}
	return false;
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
	std::cout << "\n";
	for (int i = 0; i < len - 1; i++)
	{
		int count = 1;
		if (is_meet(arr, i))
			continue;
		std::cout << arr[i];
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		std::cout << ": " << count << std::endl;
	}
}
