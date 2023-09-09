#include <iostream>

using namespace std;

void solve(int n)
{

    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;
        cout << digit << " ";
    }
}

int main()
{

    // int n=12300420;
    int n;

    cin >> n;

    solve(n);

    return 0;
}
