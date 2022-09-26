#include <iostream>

int size_arr(char arr[])
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	return size;
}

void strdup(char arr1[], char arr2[], char arr3[])
{
	for (int i = 0; i < size_arr(arr1); ++i)
		arr3[i] = arr1[i];
	for (int i = 0, j = size_arr(arr1); arr2[i] != '\0'; ++i ,++j)
		arr3[j] = arr2[i];
}

int main()
{
	char arr1[] = "Hello";
	char arr2[] = " world";
	char arr3[11];
	strdup(arr1, arr2, arr3);
	for (int i = 0; i < 11; i++)
	{
		std::cout << arr3[i];
	}
	return 0;
}
