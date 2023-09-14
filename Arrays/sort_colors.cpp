#include <iostream>
#include <vector>
using namespace std;

void sortColors(int arr[], int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {0, 2, 2, 0, 1, 0, 2, 1};

    int n = sizeof(arr) / sizeof(int);

    sortColors(arr, n);

    return 0;
}
