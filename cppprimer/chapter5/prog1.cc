#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	for (auto r : v) {
		r *= 2;
	}

	std::cout << "No reference: " << std::endl;
	for (auto r : v) {
		std::cout << r << ", ";
	}
	std::cout << std::endl;

	for (auto &r : v) {
		r *= 2;
	}

	std::cout << "With reference: " << std::endl;
	for (auto r : v) {
		std::cout << r << ", ";
	}
	std::cout << std::endl;
}
