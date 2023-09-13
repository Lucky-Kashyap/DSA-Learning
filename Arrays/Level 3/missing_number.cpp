#include <iostream>
#include <vector>

using namespace std;

int separateNumber(int arr[], int n)
{
    int missing = n;

    for (int i = 0; i < n; i++)
    {
        missing ^= i;
        missing ^= arr[i];
    }

    return missing;
}

int main()
{

    int arr[] = {0, 1};

    int size = sizeof(arr) / sizeof(int);

    int res = separateNumber(arr, size);

    cout << res << endl;

    return 0;
}
