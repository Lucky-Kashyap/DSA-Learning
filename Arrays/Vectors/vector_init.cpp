#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    int size = v.size();

    cout << "Printing The vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
        //  cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{
    // vector<int>v;
    // vector<int>arr(5);
    // vector<int> arr(5, 100);

    // printVector(arr);

    // vector<int> arr(5, 100);

    // vector<int> arr2 = {1, 2, 3, 4, 5, 10};

    // printVector(arr);

    // vector<int> arr2{1, 2, 3, 4, 5, 10};
    // printVector(arr2);

    // Copy vector data

     vector<int>arr2{1,2,3,4,5,10};
    vector<int>arr3(arr2);
   

    
    
  
    printVector(arr3);
    printVector(arr2);

    return 0;
}
