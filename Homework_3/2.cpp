#include <iostream>

size_t strlen(char *str)
{
	size_t i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int main()
{
	char str[] = "Hello world!";
	std::cout << strlen(str) << std::endl;
	return 0;
}

