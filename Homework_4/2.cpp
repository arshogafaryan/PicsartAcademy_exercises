#include <iostream>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = &arr[0];
	int i = 0;
	while (i < 5)
	{
		std::cout << *(p + i) << std::endl;
		i++;
	}
	return 0;
}
