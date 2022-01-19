#include <iostream>
int main()
{
	unsigned u = 10;
	int i = -42;
	std::cout << "Signed -42 + Signed -42 :" << i + i << std::endl;
	std::cout << "Signed -42 + Unsigned 10 :" << i + u << std::endl;

	unsigned u1 = 42, u2 = 10;
	std::cout << "Unsigned 42 - Unsigned 10 :" << u1 - u2 << std::endl;
	std::cout << "Unsigned 10 - Unsigned 42 :" << u2 - u1 << std::endl;

	return 0;
}
