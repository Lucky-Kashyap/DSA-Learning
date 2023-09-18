#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a = 12;
    int b = 15;

    int temp = a;
    a = b;
    b = temp;

    cout << a << b << endl;

    return 0;
}
