#include <iostream>

void swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverse_str(char str[], int size)
{
	for (int i = 0, j = size - 1; i < size / 2; ++i, --j)
	{
		swap(str[i], str[j]);
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
}

void to_uppercase(char str[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
}

char lowest_ascii(char str[], int size)
{
	char min = str[0];
	for (int i = 0; i < size; ++i)
	{
		if (min > str[i])
			min = str[i];
	}
	return min;
}
	
char highest_ascii(char str[], int size)
{
	char max = str[0];
	for (int i = 0; i < size; ++i)
	{
		if (max < str[i])
			max = str[i];
	}
	return max;
}	

int vowels(char str[], int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if ((int)str[i] == 65 || (int)str[i] == 69 || (int)str[i] == 73 ||
			(int)str[i] == 79 || (int)str[i] == 85 || (int)str[i] == 97 ||
			(int)str[i] == 101 || (int)str[i] == 105 || (int)str[i] == 111 ||
			(int)str[i] == 117)
			count++;
	}
	return count;
}

int main()
{
	char str[] = "CheeseBurger";
	char lowest = lowest_ascii(str, 12);
	char highest = highest_ascii(str, 12);
	int vowel = vowels(str, 12);
	std::cout << "a. Lowest ASCII value: " << lowest << std::endl;
	std::cout << "b. Highest ASCII value: " << highest << std::endl;
	std::cout << "c. Vowels: " << vowel << std::endl;
	std::cout << "d. String in Reverse Order: "; 
	for (int i = 11; i >= 0; i--)
		std::cout << str[i];
	std::cout << std::endl;
	std::cout << "e. Reversed String: ";
	reverse_str(str, 12);
	std::cout << "f. String in uppercase: ";
	to_uppercase(str, 12);
	return 0;
}
