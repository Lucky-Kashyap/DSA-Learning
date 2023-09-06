
#include <iostream>

using namespace std;

float area_circle(float radius){
    float area = 3.14 *radius*radius;
    
    return area;
}


int main()
{
    float radius;
    
    cin>>radius;
    
   float calc = area_circle(radius);
   
   cout<<"Area of circle is : "<<calc<<endl;


    return 0;
}
