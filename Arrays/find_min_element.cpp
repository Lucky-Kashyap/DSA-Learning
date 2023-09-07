#include <iostream>
#include <climits>
using namespace std;
int minimumElement(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
   
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

    int arr[8] = {76, 9, 45, 34, 65, 78, 23, 54};

    int size = 8;

    printArray(arr, size);
    // cout<<INT_MIN<<endl;

    int res = minimumElement(arr, size);

    cout << "Minimum element from the array is " << res << endl;

    return 0;
}
