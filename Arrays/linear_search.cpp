#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {
        1,
        2,
        88,
        12,
        3,
    };

    int target = 12;
    bool flag = 0;

    for (int i = 0; i < 5; i++)
    {
        if (target == arr[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}
