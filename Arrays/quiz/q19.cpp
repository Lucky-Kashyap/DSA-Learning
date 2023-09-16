#include <iostream>

using namespace std;
void func(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    // Reverse an array
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    func(arr, 8);

    return 0;
}
