
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

int main()
{
    cout<<"Main Function"<<endl;
    
    int res =max(89,13,23);
    

    cout<<"Maximum no is : "<<res<<endl;
    return 0;
}
