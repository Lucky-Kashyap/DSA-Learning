
#include <iostream>

using namespace std;

bool even(int num){
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int num;
    cin>>num;
    
    bool check = even(num);
    
    check ?cout<<"Even":cout<<"Odd";


    return 0;
}
