#include <iostream>

int strlen(char *str)
{
	if (!str)
		return 0;
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void move_one(char* s)
{
	if (!s)
		return;
	char temp;
	for (int i = 0, j = i + 1; s[j] != '\0'; j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}


void strmove(char* s, int n)
{
	if (!s || !(*s) || n < 0)
		return;
	int len = strlen(s), i = 0;
	while (i < (n % len))
	{
		move_one(s);
		i++;
	}
}

int main()
{
	char str[] = "";
	strmove(str, 2);
	std::cout << str << std::endl;
	return 0;
}
