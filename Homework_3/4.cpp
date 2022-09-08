#include <iostream>

char * to_upper_case(char *str)
{
	if (!str)
		return NULL;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return str;
}

int main()
{
	char str[] = "helLo WOrld!";
	char *up_str = to_upper_case(str);
	std::cout << up_str << std::endl;
	return 0;
}

