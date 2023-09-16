#include <iostream>
#include <vector>
using namespace std;

int firstRepeated(int arr[], int n)
{

    // include hash table
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }

    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             return i + 1;
    //         }
    //     }
    // }

    return -1;
}

int main()
{

    // int arr[]={1,2,3,4,5,2,3,2,3};
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    // 1 5 3 4 3 5 6

    int size = sizeof(arr) / sizeof(int);

    cout << "Index : " << firstRepeated(arr, size) << endl;
};