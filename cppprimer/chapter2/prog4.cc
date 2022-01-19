#include <iostream>
int main()
{
	int i1 = 0x4d;
	int i2 = 0115;
	std::cout << i1 << std::endl;
	std::cout << i2 << std::endl;

	int month = 9, day = 7;
	std::cout << month << " , " << day << std::endl;
	month = 09;
       	day = 07;
	std::cout << month << " , " << day << std::endl;


	return 0;
}
