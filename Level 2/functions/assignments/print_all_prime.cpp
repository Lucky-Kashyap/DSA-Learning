#include <iostream>

using namespace std;

bool checkPrime(int num){
 
  
  for(int i=2;i<num;i++){
      if(num%i==0){
          return false;
      }
      
  }
  
 return true;
  
}


int main()
{
    int n;
    cin>>n;
    
  
   
   for(int i=1;i<=n;i++){
        bool res = checkPrime(i);
    //   res?cout<<i<<endl:cout<<"Not Prime"<<endl;
    if(res){
        cout<<i<<" ";
    }
   }


    return 0;
}
