#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    //  if(ans+1==0){
    //       return arr.size()+1;
    //   }
    return ans + 1;
}

int main()
{
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);

    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);

    //   int target = 30;

    int found = binarySearch(arr);

    cout << found << endl;

    // if(found==-1){
    //     cout<<"Target not found"<<endl;
    // }
    // else{
    //     cout<<"Target Found at index  : "<<found<<endl;
    // }

    return 0;
}
