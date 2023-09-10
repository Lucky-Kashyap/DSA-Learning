#include <iostream>

using namespace std;

int incrementBy1(int n)
{
    n = n + 1;

    return n;
}

int main()
{
    // int a = 6;

    // int &k = a;
    // int &c = a;

    // cout << a << endl;
    // cout << k << endl;
    // cout << c << endl;

    int n;
    cin >> n;
    n = incrementBy1(n);
    cout << n << endl;

    return 0;
}
