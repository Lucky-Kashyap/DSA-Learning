#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
}

bool mycomp(int &a, int &b)
{
    return a < b;
}
int main()
{

    // vector<int> v = {5, 4, 3, 2, 1};
    vector<int> v = {0, -12, -34, 23, 45, 23, 10, 98, 231};

    // sort(v.begin(), v.end());
    sort(v.begin(), v.end(), mycomp);

    print(v);

    return 0;
}
