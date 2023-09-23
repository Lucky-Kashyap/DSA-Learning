#include <iostream>
#include <string.h>

using namespace std;

void replace(char ch[], int n)
{
    int i = 0;

    while (ch[i] != '\0')
    {
        if (ch[i] == '@')
        {
            ch[i] = ' ';
            // i++;
        }
        i++;
    }
}
int main()
{
    // char ch[20];
    char ch[20];

    cin.getline(ch, 20);

    replace(ch, 20);

    cout << endl;
    cout << "Original String : " << ch;

    return 0;
}
