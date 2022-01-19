#include <iostream>

int main()
{
	int i = 42;
	int* ip, &r = ip;
	ip = &i;
	std::cout << "*ip :" << *ip
		<< "*r :" << *r
		<< std::endl;
}

