#include <iostream>

using namespace std;

int solve(int n)
{

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Digit : ";
        int digit;
        cin >> digit;

        num = num * 10 + digit;
    }
    return num;
}

int main()
{

    int noOfDigits;

    cin >> noOfDigits;

    // int n =12;

    int number = solve(noOfDigits);
    cout << "Number create using digits : " << number << endl;

    return 0;
}
