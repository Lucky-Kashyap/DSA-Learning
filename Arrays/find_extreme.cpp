#include <iostream>
#include <climits>
using namespace std;
void reverseArray(int arr[], int size)
{

    // for(int i=size-1;i>=0;i--){
    //  cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int left = 0;
    int right = size - 1;

    // for(int i=left;i<=right;i++){

    //     cout<<arr[i]<<"  "<<arr[right]<<" ";

    //     left++;
    //     right--;
    // }

    while (left <= right)
    {
        cout << arr[left] << " " << arr[right] << " ";
        left++;
        right--;
    }

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
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
