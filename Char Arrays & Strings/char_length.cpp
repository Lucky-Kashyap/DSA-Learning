#include <iostream>

using namespace std;
int getLength(char ch[], int size)
{
    int len = 0;

    for (int i = 0; i < 20; i++)
    {

        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            len++;
        }
    }

    return len;
}

int main()
{
    char ch[20];

    cin >> ch;

    int count = getLength(ch, 20);

    // int count = 0;
    // for (int i = 0; i < 20; i++)
    // {

    //     if (ch[i] == '\0')
    //     {
    //         break;
    //     }
    //     count++;
    // }
    cout << "print the length ch " << count << endl;

    return 0;
}
