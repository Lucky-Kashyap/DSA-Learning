#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    //   if(ans+1==0){
    //       return arr.size()+1;
    //   }
    return start;
}

int main()
{
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(2);

    // arr.push_back(1);
    // arr.push_back(2);

    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);
    // arr.push_back(7);

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
