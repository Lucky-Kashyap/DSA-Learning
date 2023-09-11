#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    printVector(v);
    v.pop_back();
    printVector(v);
    v.pop_back();
    printVector(v);
    v.pop_back();
    printVector(v);
    v.pop_back();
    v.pop_back();
    printVector(v);

    return 0;
}
