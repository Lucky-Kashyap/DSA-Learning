#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {

        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // cout<<"Success";
}

int main()
{
    int arr[10] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = 10;

    solve(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
