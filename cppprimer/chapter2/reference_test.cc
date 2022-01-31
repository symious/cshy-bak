#include <iostream>

int main()
{
    int a = 10;
    int *p = &a;
    int &r = *p;

    std::cout << "a: " << a << std::endl;
    std::cout << "*p: " << *p << std::endl;
    std::cout << "r: " << r << std::endl;

    r++;
    std::cout << "a: " << a << std::endl;
    std::cout << "*p: " << *p << std::endl;
    std::cout << "r: " << r << std::endl;
}