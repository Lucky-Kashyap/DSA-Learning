#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // int a = 12;
    // int b = 15;

    // int temp = a;
    // a = b;
    // b = temp;

    // cout << a << b << endl;

    int a;
    int b;

    cout << "Enter numbers : " << endl;

    cin >> a;
    cin >> b;

    cout << "Before swapping number : " << a << "            " << b << endl;
    // int temp = a;
    // a = b;
    // b = temp;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a=a^b;
   b=a^b;
   a=a^b;

    cout << "Swap number : " << a << "          " << b << endl;
    // cout<<a<<"          "<<b<<endl;

    return 0;
}
