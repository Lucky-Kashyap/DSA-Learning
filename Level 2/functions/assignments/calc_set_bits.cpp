#include <iostream>
#include <cmath>
using namespace std;

int solve(int n)
{

    int num = 0;
    int i = 0;
    int count = 0;
    while (n > 0)
    {
        int bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        //   num = bit * pow(10,i) + num;
        n /= 2;
        i++;
    }

    return count;
}

int main()
{

    int number;

    cout << "Enter the number for calculating set bits : ";
    cin >> number;

    // cin>>noOfDigits;

    // int n =12;

    int res = solve(number);
    cout << "No. of set bits  : " << res << endl;

    return 0;
}
