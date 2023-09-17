#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> arr;
    int m = matrix.size();
    int n = matrix[0].size();
    int total = m * n;

    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;

    int count = 0;

    while (count < total)
    {

        for (int i = startCol; i <= endCol && count < total; i++)
        {
            arr.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;
        for (int i = startRow; i <= endRow && count < total; i++)
        {
            arr.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        for (int i = endCol; i >= startCol && count < total; i--)
        {
            arr.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        for (int i = endRow; i >= startRow && count < total; i--)
        {
            arr.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }

    return arr;
}

int main()
{
    // vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> res = spiralOrder(matrix);

    //     for(int item : res){
    //         cout<<item<<" ";
    //     }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
        // for(int j=0;j<res[0].size();j++){
        //     cout<<res[i][j]<<" ";
        // }
        // cout<<endl;
    }

    // // [1,2,3,6,9,8,7,4,5]
    return 0;
}
