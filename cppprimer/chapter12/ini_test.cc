#include <iostream>

using namespace std;

int main()
{
    int *i = new int(1);
    int *i1 = new int{1};

    string *s = new string("jifs");
    string *s1 = new string{"jifsjif"};

    cout << *i << endl;
    cout << *i1 << endl;
    cout << *s << endl;
    cout << *s1 << endl;

}