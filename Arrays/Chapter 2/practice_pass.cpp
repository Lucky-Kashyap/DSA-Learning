#include <iostream>

using namespace std;

void solve(int a){
    a--;
    a=a*10;
    
    cout<<a<<endl;
}

int main()
{
    cout<<"Hello World";
    
    int a = 90;
    
    a++;
    
    solve(a);
    
    
    cout<<a<<endl;

    return 0;
}
