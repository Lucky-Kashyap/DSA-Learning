#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // char ch[20];
    // string name;

    // getline(cin, name);

    // cout << "Length of String : " << name.length() << endl;

    // string name = "";

    // cout << "Length of String : " << name.length() << endl;
    // cout << "String is empty or not  : " << name.empty() << endl;

    string name = "lucky";

    cout << "Character at position 0 is: " << name.at(0) << endl;

    cout << "Front character of string is: " << name.front() << endl;
    cout << "back character of string is: " << name.back() << endl;

    return 0;
}
