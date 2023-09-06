
#include <iostream>

using namespace std;

int fact(int num){
    
    int fact =1;
    for(int i=1;i<num;i++){
        fact = fact + fact*i;
    }
    
    return fact;
}


int main()
{
    int num;
    cin>>num;
   
   
   int res = fact(num);
   
   cout<<"Factorial of "<<num<<" is : "<<res<<endl;


    return 0;
}
