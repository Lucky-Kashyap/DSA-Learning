#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{

    if (n < 1)
        return 0;

    while (n != 1)
    {

        if (n % 2 == 1)
            return 0;

        n = n / 2;
    }

    return 1;
}

int main()
{
    int num = 64;

    int res = isPowerOfTwo(num);

    if (res == 0)
    {
        cout << "This number is not a Power Of Two" << endl;
    }
    else
    {
        cout << "Power of Two" << endl;
    }

    return 0;
}
