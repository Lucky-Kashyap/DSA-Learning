#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter the number you want check... :  "<<endl;
    cin>>n;

    if(n>0){
        cout<<"Number is positive"<<endl;
    }
    else if(n<0){
        cout<<"Number is negative"<<endl;
    }
    else{
        cout<<"Number is Zero"<<endl;
    } 
}