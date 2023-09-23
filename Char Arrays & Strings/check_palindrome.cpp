#include <iostream>
#include <string.h>

using namespace std;

bool checkPalindrome(char ch[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}
int main()
{
    // char ch[20];
    char ch[20];

    cin.getline(ch, 20);

    bool res = checkPalindrome(ch, strlen(ch));

    if (res)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome String" << endl;
    }
    cout << endl;

    cout << "Original String : " << ch;

    return 0;
}
