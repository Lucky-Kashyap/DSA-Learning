/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        // cout<<endl;
        
         for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
         for(int j=0;j<2*(i+1-1);j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=0;i<n;i++){
        // for(int j=0;j<n-i-1;j++){
        //     cout<<" ";
        // }
        // for(int j=0;j<i+1;j++){
        //     cout<<"*";
        // }
        // cout<<endl;
    // }

    return 0;
}
