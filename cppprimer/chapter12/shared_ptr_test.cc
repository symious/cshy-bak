#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;


void share_data() {
    vector<string> v1;
    {
        vector<string> v2 = {"a", "an", "the"};
        v1 = v2;
    }
    for (string s : v1) {
        cout << s << endl;
    }
}

void print_count() {
    shared_ptr<int> p = make_shared<int>(42);
    cout << "p.use_count(): " << p.use_count() << endl;

    shared_ptr<int> p1(p);
    cout << "p.use_count(): " << p.use_count() << endl;
    cout << "p1.use_count(): " << p1.use_count() << endl;

    {
        shared_ptr<int> p2 = p;
        cout << "p.use_count(): " << p.use_count() << endl;
        cout << "p1.use_count(): " << p1.use_count() << endl;
        cout << "p2.use_count(): " << p2.use_count() << endl;
    }

    cout << "p.use_count(): " << p.use_count() << endl;
    cout << "p1.use_count(): " << p1.use_count() << endl;
}

int main() 
{
    // print_count();
    share_data();
}