#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool largerThanFile(const string &s1)
{
    return s1.size() < 5;
}

void resort(vector<string> &words)
{
    partition(words.begin(), words.end(), largerThanFile);
}

int main()
{
    vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    resort(vec);

    for (string s : vec) {
        cout << s << endl;
    }
}

