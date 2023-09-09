#include <iostream>

using namespace std;

void solve(int a)
{
    a--;
    a = a * 10;

    cout << a << endl;
}

int main()
{
    // cout<<"Hello World";

    // int a = 90;

    // a++;

    // solve(a);

    // cout<<a<<endl;

    // int a = 50;

    // cout<<a<<endl;
    // int b = a;
    // cout<<b<<endl;

    int a = 50;

    // cout<<a<<endl;
    int &b = a;

    a++;
    b++;

    cout << a << endl;
    cout << b << endl;
    return 0;
}
