#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void missingElement(int arr[], int n)
{

    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(arr[i]);
    //     if (arr[index - 1] > 0)
    //     {
    //         arr[index - 1] *= -1;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         cout << i + 1 << " " << endl;
    //     }
    // }

    // using sorting and swapping method

    int i = 0;

    while (i < n)
    {
        int index = arr[i] - 1;

        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Missing element " << i + 1 << endl;
        }
    }
}

int main()
{

    // int arr[]={1,2,3,4,5,2,3,2,3};
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    // 1 5 3 4 3 5 6

    int size = sizeof(arr) / sizeof(int);

    missingElement(arr, size);
};