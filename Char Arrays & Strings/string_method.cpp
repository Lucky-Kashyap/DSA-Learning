#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // char ch[20];
    string name;

    getline(cin, name);

    cout << "Length of String : " << name.length() << endl;

    return 0;
}
