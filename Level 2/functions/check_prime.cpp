
#include <iostream>

using namespace std;

void checkPrime(int num){
  bool flag=1;
  
  for(int i=2;i<num;i++){
      if(num%i==0){
          flag=0;
      }
  }
  
  if(flag==1){
      cout<<"Prime number"<<endl;
  }
  else{
      cout<<"Not a Prime number"<<endl;
  }
}


int main()
{
    cout<<"Main Function"<<endl;
    
   checkPrime(15);


    return 0;
}
