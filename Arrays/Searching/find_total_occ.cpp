#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    // bool flag=false;
    int start = 0;
    int end = arr.size() - 1;
    // int mid = (start+end)/2;
    int mid = start + (end - start) / 2;
    int ans = 0;

    // while(start<=end){

    //     if(arr[mid]==target){
    //         flag=true;
    //         return mid;
    //     }
    //     else if(arr[mid]<target){
    //         start=mid+1;
    //     }
    //     else if(arr[mid]>target){
    //         end=mid-1;
    //     }
    //     mid = (start+end)/2;
    // }

    for (int i = start; i <= end; i++)
    {

        if (arr[mid] == target)
        {
            //  ans=mid;
            ans++;
            // end=mid-1;
            start = mid + 1;

            // flag=true;
            // return mid;
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

    // return ans;

    // if(ans==ans){
    //     return ans;
    // }
    return ans;
}

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(70);
    arr.push_back(80);
    arr.push_back(85);
    arr.push_back(90);

    int target = 30;

    int found = binarySearch(arr, target);

    cout << found << endl;

    // if(found==-1){
    //     cout<<"Target not found"<<endl;
    // }
    // else{
    //     cout<<"Target Found at index  : "<<found<<endl;
    // }

    return 0;
}
