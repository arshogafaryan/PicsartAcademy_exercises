#include <iostream>

int main()
{
	int a = 4;
	double b = 3.14;
	long c = 2542;

	int *i = &a;
	double *d = &b;
	long *l = &c;

	std::cout << i << std::endl << d << std::endl << l << std::endl;
}
