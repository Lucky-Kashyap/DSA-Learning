#include <iostream>

using namespace std;
int slowExponentiation(int a, int b)
{
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }

    return ans;
}

int main()
{
    int num = 5;
    int num2 = 5;

    int res = slowExponentiation(num, num2);

    cout << res << endl;

    return 0;
}
