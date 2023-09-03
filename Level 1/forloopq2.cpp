#include<iostream>

using namespace std;

int main(){
    
    // five times name print

int n;

cout<<"Enter the number for print its table : "<<endl;

cin>>n;

cout<<"Table of "<<n<<endl;

    for(int i=1;i<=10;i++){
            cout<<n <<" * "<<i<<" = " <<n*i<<endl;
    }

    
}