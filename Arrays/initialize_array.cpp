#include <iostream>

using namespace std;

int main()
{
    // int arr[10]={1,2,88,45,3,22,3,3};
    
    // cout<<arr<<endl;
    
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }
    

    int arr[] = {2,3,49,8,4,56,38};
    
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<endl;
    }
    


    return 0;
}
