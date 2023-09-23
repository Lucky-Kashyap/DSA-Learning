#include <iostream>

using namespace std;

int main()
{
    char ch[20];

    cin >> ch;

    int count = 0;
    for (int i = 0; i < 20; i++)
    {

        if (ch[i] == '\0')
        {
            break;
        }
        count++;
    }
    cout << "print the length ch " << count << endl;

    return 0;
}
