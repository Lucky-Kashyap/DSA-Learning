#include <iostream>
#include <climits>
using namespace std;
bool isPalindrome(int x)
{

    if (x < 0)
        return 0;

    int ans = 0, rem, num = x;

    while (num)
    {
        rem = num % 10;
        num = num / 10;

        if (ans > INT_MAX / 10)
            return 0;

        ans = ans * 10 + rem;
    }

    if (ans == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 121;

    int res = isPalindrome(num);

    if (res == 1)
    {
        cout << "This number is palindrome number " << endl;
    }
    else
    {
        cout << "Not a Palindrome number" << endl;
    }

    return 0;
}
