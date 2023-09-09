#include <iostream>

using namespace std;

void solve(int arr[],int n){
    arr[1]=98;
}

int main()
{
    int arr[] = {2,4,6,12,32,13};
    int n = 6;
    
    solve(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}