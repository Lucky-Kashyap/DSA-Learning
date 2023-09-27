#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string s, int i, int j)
{

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }

    return true;
}
bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            bool pal1 = checkPalindrome(s, i + 1, j);
            bool pal2 = checkPalindrome(s, i, j - 1);

            return pal1 || pal2;
        }
    }

    return true;
}

int main()
{

    // string str = "abc";
    string str = "aba";

    cout << "ValidProme II   : " << validPalindrome(str) << endl;

    return 0;
}
