#include <iostream>

using namespace std;
bool isLeap(int N)
{

    if (N % 400 == 0)
    {
        return 1;
    }
    else if (N % 4 == 0 && N % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year = 1998;

    bool res = isLeap(year);

    if (res == 1)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}
