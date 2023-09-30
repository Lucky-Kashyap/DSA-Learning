#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
}

void insertionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int key = v[i];

        int j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];

            j--;
        }

        v[j + 1] = key;
    }
}

int main()
{

    // vector<int> v = {5, 4, 3, 2, 1};
    vector<int> v = {0, -12, -34, 23, 45, 23, 10, 98, 231};

    insertionSort(v);

    print(v);

    return 0;
}
