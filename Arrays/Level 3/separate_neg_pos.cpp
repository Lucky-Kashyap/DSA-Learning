#include <iostream>
#include <vector>

using namespace std;

void separateNumber(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] < arr[right])
        {
            swap(arr[left], arr[right]);
            // right--;
            left++;
        }
        else
        {
            // left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {23, -7, 12, -10, -11, 40, 60, 90, -12, -13};

    int size = sizeof(arr) / sizeof(int);

    // cout<<size<<endl;

    separateNumber(arr, size);

    return 0;
}
