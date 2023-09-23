#include <iostream>
#include <string.h>

using namespace std;

void printString(string ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        cout << "Index " << i << "    " << ch[i] << endl;
        i++;
    }

    cout << "Printing 10th index value " << ch[10] << endl;

    int res = (int)ch[10];

    cout << "Asscii value of ch[10] is " << res << endl;
}
int main()
{
    // char ch[20];
    string ch;

    // cin.getline(ch,100);
    cin >> ch;

    printString(ch);

    cout << "Original String : " << ch;

    return 0;
}
