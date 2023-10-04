#include <iostream>

using namespace std;

int bitwiseComplement(int n)
{

    if (n == 0)
        return 1;

    int ans = 0, mul = 1, rem;

    while (n)
    {

        rem = n % 2;
        rem = rem ^ 1;
        n = n / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }

    return ans;
}

int main()
{
    int num = 7;

    int res = bitwiseComplement(num);

    if (res == 1)
    {
        cout << "Does not exist complement of this number" << endl;
    }
    else
    {
        cout << "Compliment of this  number : " << res << endl;
    }

    return 0;
}
