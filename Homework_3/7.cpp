#include <iostream>

void strset(char* s, char ch)
{
	if (!s)
		return;
	while (*s)
	{
		*s = ch;
		s++;
	}
}

int main()
{
	char s[] = "hello";
	strset(s, 'x');
	std::cout << s;
	return 0;
}
	
