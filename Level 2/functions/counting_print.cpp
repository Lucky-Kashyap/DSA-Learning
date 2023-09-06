
#include <iostream>

using namespace std;

void countingPrint(int count){
    for(int i=1;i<=count;i++){
        cout<<i<<endl;
    }
}

int main()
{
    cout<<"Main Function"<<endl;
    
   countingPrint(20);


    return 0;
}
