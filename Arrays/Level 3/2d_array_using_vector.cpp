#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<vector<int>> v;

    // cout << v.size() << endl;

    // vector <vector<int>>arr(5,vector<int>(10,0));

    vector<vector<int>> arr;

    vector<int> vec1(5, 0);
    vector<int> vec2(7, -1);
    vector<int> vec3(3, 10);
    vector<int> vec4(9, -1);
    vector<int> vec5(6, 0);

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout<<v.size()<<endl;

    return 0;
}
