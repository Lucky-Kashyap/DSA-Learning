#include <iostream>

using namespace std;

int main()
{
    char ch[5];

    cin >> ch;

    // cout<<ch<<" ";
    cout << "printing the value of ch" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "At index : " << i << "  " << ch[i] << " " << endl;
    }

    return 0;
}
