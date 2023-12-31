#include <iostream>

using namespace std;

int gcd(int A, int B)
{
    if (A == 0)
        return B;

    if (B == 0)
        return A;

    while (A > 0 && B > 0)
    {
        if (A > B)
        {
            A = A - B;
        }
        else
        {
            B = B - A;
        }
    }

    return A == 0 ? B : A;
}
int main()
{
    int num = 10;
    int num2 = 20;

    int res = gcd(num, num2);

    cout << res << endl;

    return 0;
}
