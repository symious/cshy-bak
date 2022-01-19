#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string line = "FIRST,SECOND,THIRD,FOURTH,FIFTH";
    auto comma = find(line.cbegin(), line.cend(), ',');
    cout << string(line.cbegin(), comma) << endl;

    auto rcomma = find(line.crbegin(), line.crend(), ',');
    cout << string(line.crbegin(), rcomma) << endl;
    cout << string(rcomma.base(), line.cend()) << endl;
}