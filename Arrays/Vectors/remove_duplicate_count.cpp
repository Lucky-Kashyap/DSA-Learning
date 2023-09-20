#include <iostream>
#include <vector>

using namespace std;
int removeDuplicate(vector<int> arr)
{
    int i = 1, j = 0;

    while (i < arr.size())
    {
        if (arr[i] == arr[j])
        {
            i++;
        }
        else
        {
            j++;
            arr[j] = arr[i];
            i++;
        }
    }

    return j + 1;
}
int main()
{
    vector<int> arr{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicate(arr);

    cout << "Unique elements count : " << k;
    return 0;
}
