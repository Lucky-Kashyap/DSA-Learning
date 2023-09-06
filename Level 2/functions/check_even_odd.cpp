
#include <iostream>

using namespace std;

void checkEvenOdd(int num){
    if(num%2==0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
}


int main()
{
    cout<<"Main Function"<<endl;
    
   checkEvenOdd(17);


    return 0;
}
