#include <iostream>

int strlen(char *str)
{
	if (!str)
		return NULL;
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
void reverse_str(char * str)
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		int temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

int main()
{
	char str[] = "hello world!";
	reverse_str(str);
	std::cout << str << std::endl;
	return 0;
}
