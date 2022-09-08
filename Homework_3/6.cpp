#include <iostream>


char * strcat(char* s1, char* s2)
{
	if (!s1 || !s2)
		return NULL;
	char * temp = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	return temp;
}

int main()
{
	char str1[100] = "haylo";
	char str2[] = " world";
	std::cout << strcat(str1, str2) << std::endl;
	return 0;
	}
