#include <iostream>

using namespace std;

int main()
{
    int a = 6;

    int &k = a;
    int &c = a;

    cout << a << endl;
    cout << k << endl;
    cout << c << endl;

    return 0;
}
