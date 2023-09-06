
#include <iostream>

using namespace std;

void printA();
void printB();
void printC();
void printD();



void printA(){
    cout<<"Function A"<<endl;
    printB();
}
void printB(){
    cout<<"Function B"<<endl;
    printC();
}
void printC(){
    cout<<"Function C"<<endl;
}
void printD(){
    cout<<"Function D"<<endl;
    printA();
}

int main()
{
    cout<<"Main Function"<<endl;
    
    printD();
    



    return 0;
}


// Main Function
// Function D
// Function A
// Function B
// Function C

