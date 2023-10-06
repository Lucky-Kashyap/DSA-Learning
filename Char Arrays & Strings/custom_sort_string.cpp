#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
string str;
bool compare(char char1, char char2)
{

    return (str.find(char1) < str.find(char2));
}
string customSortString(string order, string s)
{

    str = order;
    sort(s.begin(), s.end(), compare);
    return s;
}

int main()
{
    //   string order = "cba", s = "abcd";
    string order = "cbafg", s = "abcd";
    // Output: "cbad"

    string res = customSortString(order, s);
    cout << res << endl;

    // Output: "cbad"

    return 0;
}
