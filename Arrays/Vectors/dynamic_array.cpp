#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cin >> n;

    int *arr = new int[n];
    cout << "Input some elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr[n + 1] = 90;
    solve(arr, n);

    return 0;
}
