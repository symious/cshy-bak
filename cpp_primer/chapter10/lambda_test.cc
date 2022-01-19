#include <iostream>
#include <vector>

using namespace std;

int main()
{
    auto f1 = [] () -> int {return 42;};
    auto f2 = [] () {return 42;};
    auto f3 = [] () {return 42;};
    auto f4 = [] {return 42;};


    auto isShorter = [] (const string &a, const string &b) {
        return a.size() < b.size();
    };

    vector<string>::size_type sz = 5;
    auto isValid = [sz] (const string &a) {
        return a.size() >= sz;
    };

    cout << f4() << endl;

    int tmpValue = 1;
    auto f5 = [tmpValue] () {return tmpValue;};
    cout << f5() << endl;
    
    tmpValue = 2;
    cout << f5() << endl;
}