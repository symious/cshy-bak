#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;


void test1() 
{
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
    "the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) {
            ++word_count[word];
        }
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << endl;
    }
}

void test2()
{
    map<int, int> test_map = {{1,1}, {2,2}, {3,3}, {4,4}, {5,5}};
    cout << test_map.lower_bound(3) -> second << endl;
    cout << test_map.upper_bound(3) -> second << endl;
}

int main()
{
    test2();
}