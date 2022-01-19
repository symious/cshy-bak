#include <iostream>


using namespace std;

auto f_10_14 = [] (const int a, const int b) {
    return a + b;
};

void f_10_15() {
    int i_10_15 = 10;
    auto le_10_15 = [i_10_15] (const int a) {
        return i_10_15 + a;
    };
    cout << "Result :" << le_10_15(1) << endl;
}

int main()
{
    f_10_15();
}