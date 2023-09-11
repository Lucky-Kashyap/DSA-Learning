#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    while (1)
    {
        int data;
        cin >> data;
        v.push_back(data);
        cout << "Capacity : " << v.capacity() << " Size : " << v.size() << endl;
    }

    return 0;
}
