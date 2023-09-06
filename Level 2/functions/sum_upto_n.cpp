
#include <iostream>

using namespace std;

int sumUptoN(int num){
   int sum =0;
   
   for(int i=0;i<=num;i++){
       sum+=i;
   }
   
   return sum;
}


int main()
{
    cout<<"Main Function"<<endl;
    
   int res = sumUptoN(5);

cout<<"Sum of all n numbers is : "<<res<<endl;

    return 0;
}
