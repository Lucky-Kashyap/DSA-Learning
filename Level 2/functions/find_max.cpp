
#include <iostream>

using namespace std;

int max(int a,int b,int c){
    
        if(a>b){
            if(a>c){
                return a;
            }
            else{
                return b;
            }
        }
        else if(b>c){ 
            return b;
        }
        else{
            return c;
        }
}

void maximum(int num1,int num2,int num3){
    int ans = max(num1,num2);
    int final = max(ans,num3);

    cout<<"Maximum number is : "<<final<<endl;
}
int main()
{
    cout<<"Main Function"<<endl;
    
    // int res =max(89,13,23);
    

    // cout<<"Maximum no is : "<<res<<endl;

    maximum(3,3,2);

    
    return 0;
}
