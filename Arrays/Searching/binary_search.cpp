#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> arr, int target)
{
    bool flag = false;
    int start = 0;
    int end = arr.size() - 1;
    // cout<<end;
    int mid = (start + end) / 2;

    // while (start <= end)
    {
        if (arr[mid] == target)
        {
            flag = true;
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        // {
        //     mid = (start + end) / 2;

        //     if (arr[mid] == target)
        //     {
        //         flag = true;
        //         return mid;
        //     }
        //     if (arr[mid] < target)
        //     {
        //         start = mid + 1;
        //     }
        //     if (arr[mid] > target)
        //     {
        //         end = mid - 1;
        //     }
    }

    // for(int i=0;i<end;i++){
    //     if(arr[mid]==target){

    //     }
    // }

    for (int i = start; i < end; i++)
    {

        if (arr[mid] == target)
        {
            flag = true;
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return flag;
}

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);

    int target = 90;

    bool found = binarySearch(arr, target);

    found ? cout << "Target Found" : cout << "Target Not Found" << endl;

    return 0;
}
