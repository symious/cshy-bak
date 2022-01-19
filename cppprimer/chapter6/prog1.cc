#include <iostream>


int calc(int a, int b) {
	return a + b;
}
int calc(const int a, const int b) {
	return a + b;
}

int main()
{
	int a = 1, b = 2;
	std::cout << calc(a, b) << std::endl;
	const int ca = 1, cb = 2;
	std::cout << calc(ca, cb);
}
