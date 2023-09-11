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

    for(int i=0;i<10;i++){
        v.push_back(100);
    }
    
    printVector(v);

    return 0;
}
