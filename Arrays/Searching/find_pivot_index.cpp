#include <iostream>
#include <vector>

using namespace std;
int findPivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }

        if (nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        else if (nums[s] > nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    vector<int> arr;

    arr.push_back(12);
    arr.push_back(14);
    arr.push_back(16);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);

    int pivotIndex = findPivotIndex(arr);

    cout << "Pivot index of vector : " << pivotIndex << endl;

    return 0;
}
