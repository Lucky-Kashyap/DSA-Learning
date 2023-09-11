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
    vector<int> v;

    int n;
    cout << "Input n elements : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }

    printVector(v);

    v.clear();

    cout << "Clear vector print" << endl;
    printVector(v);

    return 0;
}
