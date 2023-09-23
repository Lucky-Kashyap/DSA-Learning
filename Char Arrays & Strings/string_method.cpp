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

    // string name = "lucky";

    // cout << "Character at position 0 is: " << name.at(0) << endl;

    // cout << "Front character of string is: " << name.front() << endl;
    // cout << "back character of string is: " << name.back() << endl;

    // string str1 = "Lucky";
    // string str2 = "Kashyap";

    // cout << "before appending" << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // // apend
    // str1.append(str2);

    // cout << "After appending" << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    string str = "This is a car";
    str.erase(4, 3);
    cout << str << endl;

    return 0;
}
