#include <iostream>
#include <vector>

using namespace std;

void separateNumber(vector<int> arr, int n, int k)
{

    vector<int> krr(n);

    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + k) % n;
        krr[newIndex] = arr[i];
    }

    arr = krr;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // int arr[]={10,20,30,40,50,60};

    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    int size = sizeof(arr) / sizeof(int);

    // cout<<size<<endl;
    int k = 2;

    separateNumber(arr, size, k);

    return 0;
}
