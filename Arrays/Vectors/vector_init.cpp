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
    vector<int> arr(5, 100);

    printVector(arr);

    return 0;
}
