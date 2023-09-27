#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string s)
{

    string temp = "";
    int i = 0;

    while (i < s.length())
    {
        if (temp.length() > 0 && temp[temp.length() - 1] == s[i])
        {
            temp.pop_back();
        }
        else
        {
            temp.push_back(s[i]);
        }
        i++;
    }

    return temp;
}

int main()
{
    // string str = "azxxzy";
    string str = "abbaca";

    cout << "Remove Adjacent Duplicates : " << removeDuplicates(str) << endl;

    return 0;
}
