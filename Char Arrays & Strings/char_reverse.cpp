#include <iostream>
#include <string.h>
using namespace std;
int getLength(char ch[], int size)
{
    int len = 0;

    int i = 0;

    while (ch[i] != '\0')
    {
        len++;
        i++;
    }

    return len;
}

void reverseString(char ch[], int n)
{

    cout << "Reverse String : ";
    for (int i = n; i >= 0; i--)
    {
        cout << ch[i] << " ";
    }
}

int main()
{
    char ch[20];

    cin >> ch;

    int count = getLength(ch, 20);

    reverseString(ch, count);
    cout << endl;
    cout << "Original String : " << ch;

    return 0;
}
