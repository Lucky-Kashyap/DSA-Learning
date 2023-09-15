#include <iostream>

using namespace std;

void moveNeg(int arr[], int n)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        if (arr[l] == 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // int arr[8] = {76, 9, -9, 34, 65, 78, 23, 54};
    int arr[] = {0, 0, 1, 1, 1, 0, 1, 0, 0, 1};

    int size = sizeof(arr) / sizeof(int);

    moveNeg(arr, size);

    return 0;
}
