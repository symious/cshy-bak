#include <iostream>
#include <string>
#include <memory>

int main()
{
    {
        std::string *s = new std::string;
        auto s2 = std::make_shared<std::string>();
        std::string item(*s);
    }
}