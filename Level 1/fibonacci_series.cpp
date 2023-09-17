#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> num;

    // int next=0;
    int a = 0;
    int b = 1;

    for (int i = 0; i < num; i++)
    {
        cout << a << " ";
        int next = a;
        a = b;
        b = next + a;
    }

    return 0;
}
