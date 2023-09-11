#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<char> v)
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

    vector<char> arr;

    arr.push_back('A');

    printVector(arr);

    return 0;
}
