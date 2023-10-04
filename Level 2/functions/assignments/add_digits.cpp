#include <iostream>

using namespace std;
int addDigits(int n)
{

    while (n > 9)
    {
        int ans = 0, rem;

        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            ans = ans + rem;
        }

        n = ans;
    }

    return n;
}
int main()
{
    cout << addDigits(1234) << endl;

    return 0;
}
