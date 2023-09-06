
#include <iostream>

using namespace std;

int sumEven(int num){
   int sum =0;
   
   for(int i=1;i<=num;i++){
       if(i%2==0){
           sum+=i;
       }
   }
   
   return sum;
}


int main()
{
    cout<<"Main Function"<<endl;
    
   int res = sumEven(10);

cout<<"Sum of all n numbers is : "<<res<<endl;

    return 0;
}
