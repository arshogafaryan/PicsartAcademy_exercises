#include <iostream>

bool strcmp(char str1[], char str2[])
{
	for (int i = 0; str1[i] != '\0'; ++i)
	{
		if (str1[i] != str2[i])
			return false;
	}
	return true;
}

int main()
{
	char str1[] = "hella";
	char str2[] = "hello";
	if (strcmp(str1, str2))
		std::cout << "The strings are the same";
	else
		std::cout << "Different strings";
	return 0;
}
