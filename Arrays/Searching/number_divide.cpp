#include <iostream>
#include <climits>

using namespace std;
// int getQuotient(int divisor, int dividend)
// {
//     int s = 0;
//     int e = dividend;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     while (s <= e)
//     {
//         if (mid * divisor == dividend)
//         {
//             return mid;
//         }

//         if (mid * divisor < dividend)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }

//     return ans;
// }

// int main()
// {
//     int divisor = 2;
//     int dividend = -20;

//     // int ans = getQuotient(divisor, dividend);
//     // handle negative case
//     int ans = getQuotient(abs(divisor), abs(dividend));

//     if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
//     {
//         ans = 0 - ans;
//     }

//     cout << "Answer : " << ans << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
float getQuotient(float divisor, float dividend)
{
    float s = 0;
    float e = dividend;
    float mid = s + (e - s) / 2;
    float ans = -1.0;
    int rem = 0;

    while (s <= e)
    {
        float chek = mid * divisor + rem;
        if (chek == dividend)
        {
            return mid;
        }

        if (chek < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

double myPrecisionDivide(int dividend, int divisor)
{
    double quotient = getQuotient(dividend, divisor);
    int precision = 5;
    double step = 0.1;
    for (int i = 0; i < precision; ++i)
    {
        double j = quotient;
        while (j * divisor <= dividend)
        {
            quotient = j;
            j += step;
        }
        step /= 10;
    }
    return quotient;
}

int main()
{
    int divisor = 6;
    int dividend = 26;

    // int ans = getQuotient(divisor,dividend);

    // float ans = getQuotient(abs(divisor), abs(dividend));

    // if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    // {
    //     ans = 0 - ans;
    // }

    cout << "Number divide : " << myPrecisionDivide(dividend, divisor) << endl;
    // cout << "Answer : " << ans << endl;

    return 0;
}
