#include <iostream>

using namespace std;

int main()
{

    // ✅Print number from 280 to 250 with the help of /r loop.
    for (int i = 280; i >= 250; i--)
    {
        cout << i << " ";
    }

    // ✅Print char from ‘A’ to ‘Z’ with the help of a for loop.
    for (char i = 65; i <= 90; i++)
    {
        cout << i << " ";
    }

    // ✅Print char from ‘Z’ to ‘A’ with the help of a for loop.

    for (char i = 90; i >= 65; i--)
    {
        cout << i << " ";
    }

    // ✅Print Sum of square of first n natural number.

    int sum = 0;
    // int n = 10;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += i * i;
    }

    cout << sum << endl;

    // ✅Print Sum of cube of first n natural number
    int sum = 0;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        sum += i * i * i;
    }

    cout << sum << endl;

    // ✅Print n’th Fibonacci number.

    int previos = 0;
    int curr = 1;

    cout << previos << " ";
    cout << curr << " ";

    for (int i = 1; i < 10; i++)
    {
        int next = previos + curr;
        cout << next << " ";
        previos = curr;
        curr = next;
    }

    return 0;
}
