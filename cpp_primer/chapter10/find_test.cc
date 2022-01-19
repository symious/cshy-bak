#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int val = 42;
    vector<int> vec{1,2,3,4,5,6,7,8,9,0};
    auto first = vec.cbegin();
    auto last = vec.cend();
    cout << "First : " << *first << ", Last: " << *last << endl;
    cout << last - first;

    auto result = find(vec.cbegin(), vec.cend(), val);

    cout << "The value " << val << (result == vec.cend()
    ? " is not present" : " is present") << endl;
}