#include <iostream>
#include <climits>
using namespace std;
void reverseArray(int arr[], int size)
{

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    int arr[8] = {76, 9, -9, 34, 65, 78, 23, 54};

    int size = 8;

    cout << "Before Array : " << endl;
    printArray(arr, size);

    cout << "After Reverse Array : " << endl;
    reverseArray(arr, size);

    return 0;
}
