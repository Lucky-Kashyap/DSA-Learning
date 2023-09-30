#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// void print(vector<int> v)
// {
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
// }

void print(vector<vector<int>> &v)
{
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }

    for (int i = 0; i < v.size(); i++)
    {
        // cout<< v[i] << " ";
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];

        cout << a << "   " << b << endl;
    }
    cout << endl;
}
// increasing order sorting

// bool mycomp(int &a, int &b)
// {
//     return a < b;
// }

// decreasing order sorting

// bool mycomp(int &a, int &b)
// {
//     return a > b;
// }

bool mycomp(vector<int> &a, vector<int> &b)
{
    // return a[0] < b[0];
    // return a[0] > b[0];
    return a[1] < b[1];
}

int main()
{

    // vector<int> v = {5, 4, 3, 2, 1};
    // vector<int> v = {0, -12, -34, 23, 45, 23, 10, 98, 231};

    // sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), mycomp);

    // print(v);

    // vector of vector

    vector<vector<int>> v;

    int n;
    cout << "Enter size : \n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Enter a & b : " << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    cout << "HEre are the values " << endl;

    print(v);

    cout << "Sorted by 1st index : " << endl;

    // sort(v.begin(),v.end());
    sort(v.begin(), v.end(), mycomp);

    print(v);

    return 0;
}
