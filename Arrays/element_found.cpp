#include <iostream>

using namespace std;

bool findElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int arr[5] = {
        1,
        2,
        88,
        12,
        3,
    };

    int target = 42;
    int size = 5;

    bool res = findElement(arr, size, target);

    if (res)
    {
        cout << "Element is Found" << endl;
    }
    else
    {
        cout << "Element does not find" << endl;
    }

    return 0;
}
