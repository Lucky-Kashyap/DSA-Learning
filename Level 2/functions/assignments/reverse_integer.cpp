#include <iostream>
#include<math.h>

using namespace std;

int reverseInteger(int num){
    
    int rev=0;
    int temp = num;
bool flag=false;


    if(temp<=INT_MIN){
        return 0;
    }
    if(temp<0){
        flag=true;
        temp=-temp;
    }
    
    while(temp!=0){
        if(rev>INT_MAX/10){
            return 0;
        }
        int rem = temp%10;
        rev =rev*10 + rem;
        temp=temp/10;
    }
    
    return flag?-rev:rev;
}


int main()
{
    int n;
    cin>>n;
    
  
   
   cout<<"Reverse Integer of "<<n<<" is : "<<reverseInteger(n)<<endl;


    return 0;
}
