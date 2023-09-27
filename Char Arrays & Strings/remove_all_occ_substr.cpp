#include <iostream>
#include <string>

using namespace std;

string removeAllOccurrence(string s, string part)
{

    while (s.find(part) != string::npos)
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{

    string str = "daabcbaabcbc";
    string part = "abc";

    cout << "Remove All Ooccurences : " << removeAllOccurrence(str, part) << endl;

    return 0;
}
