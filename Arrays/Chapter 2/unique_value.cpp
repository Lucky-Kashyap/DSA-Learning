#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    int unique = 0;

    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }

    cout << unique << endl;
}

int main()
{
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int n = 9;

    solve(arr, n);

    return 0;
}
