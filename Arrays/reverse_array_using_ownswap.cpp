#include <iostream>
#include <climits>
using namespace std;
void reverseArray(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    int temp = 0;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            cout << arr[left] << " " << arr[right] << " ";

            //   swap(arr[left],arr[right]);
        }
        left++;
        right--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[9] = {76, 9, -9, 34, 65, 78, 23, 54, 3};

    int size = 9;

    cout << "Before Array : " << endl;
    printArray(arr, size);

    cout << "After Reverse Array : " << endl;
    reverseArray(arr, size);

    return 0;
}
