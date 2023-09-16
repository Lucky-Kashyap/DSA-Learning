#include <iostream>
#include <vector>

using namespace std;

int func(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int num[] = {};

    int pos = 0;
    int neg = 1;

    for (int i = 0; i < end; i++)
    {
        if (arr[i] > 0)
        {
            num[pos] = arr[i];
            pos += 2;
        }
        else
        {
            num[neg] = arr[i];
            neg += 2;
        }
    }

    return 0;

    // for(int i=0;i<n;i++){
    //     cout<<num[i]<<" ";
    // }
}

vector<int> rearrangeArray(vector<int> &nums)
{
    int start = 0;
    int end = nums.size();

    vector<int> arr(end, 0);

    int pos = 0;
    int neg = 1;

    for (int i = 0; i < end; i++)
    {
        if (nums[i] > 0)
        {
            arr[pos] = nums[i];
            pos += 2;
        }
        else
        {
            arr[neg] = nums[i];
            neg += 2;
        }
    }
    return arr;
}
int main()
{
    vector<int> rearra{1, -12, -3, 4, -5, 6, -7, -14};

    vector<int> printArray = rearrangeArray(rearra);

    for (int i : printArray)
    {
        cout << i << " ";
    }

    return 0;
}
