#include <iostream>

using namespace std;

void solve(float n)
{
    float res = n * 0.621371;
    cout << res;
}

int main()
{

    // float n = 12;

    float n;

    cout << "Tell me km : ";

    cin >> n;

    solve(n);

    return 0;
}
