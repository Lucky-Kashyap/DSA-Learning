#include <iostream>

using namespace std;

void solve(int a){
    a++;
    cout<<a<<endl;
}

// result  Hello World12
//         12


int main()
{
    cout<<"Hello World";
    
    int a = 10;
    
    a++;
    
    solve(a);
    
    a++;
    cout<<a<<endl;

    return 0;
}
