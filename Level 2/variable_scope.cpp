#include <iostream>

using namespace std;

int age = 23;

int main()
{
    int a = 5;

    cout<<a<<endl;

    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }

    cout<<i<<endl;   // not accessible

    if(true){
        int b = 25;
        cout<<a<<endl;
    }

    cout<<b;        // not defined

    return 0;
}