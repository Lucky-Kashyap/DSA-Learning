#include <iostream>
#include <string.h>

using namespace std;

void upperString(char ch[], int n)
{

    int i = 0;

    while (ch[i] != '\0')
    {
        char curr = ch[i];

        if (curr >= 'a' && curr <= 'z')
        {
            ch[i] = curr - 'a' + 'A';
        }
        i++;
    }
}
int main()
{
    // char ch[20];
    char ch[20];

    cin.getline(ch, 20);

    upperString(ch, 20);

    cout << endl;
    cout << "Original String : " << ch;

    return 0;
}
