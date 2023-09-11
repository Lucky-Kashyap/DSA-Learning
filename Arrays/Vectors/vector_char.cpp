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

void printVector2(vector<char> v)
{
    int size = v.size();

    cout << "Printing The vector" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{

    // vector<char> arr;

    // arr.push_back('A');

    vector<char> arr;

    arr.push_back('A');
    arr.push_back('B');
    arr.push_back('C');

    // another way

    cout << "FRont ELement : " << arr.front() << endl;
    cout << "Ending ELement : " << arr.back() << endl;

    // cout << "FRont ELement : " << arr[0] << endl;
    // cout << "Ending ELement : " << arr[arr.size() - 1] << endl;

    printVector(arr);
    printVector2(arr);

    return 0;
}
