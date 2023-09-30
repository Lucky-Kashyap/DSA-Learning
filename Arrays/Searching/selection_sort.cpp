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

void selectionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }

        swap(v[i], v[minIndex]);
    }
}

int main()
{

    // vector<int> v = {5, 4, 3, 2, 1};
    vector<int> v = {0, -12, -34, 23, 45, 23, 10, 98, 231};

    selectionSort(v);

    print(v);

    return 0;
}
