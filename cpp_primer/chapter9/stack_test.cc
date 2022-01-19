#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> intStack;
    for (size_t ix = 0; ix != 10; ++ix) {
        intStack.push(ix);
    }
    while (!intStack.empty()) {
        int value = intStack.top();
        cout << "Pop value: " << value << endl;
        intStack.pop();
    }
}