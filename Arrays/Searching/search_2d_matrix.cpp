#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row * col;
    int s = 0;
    int e = total - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;
        int currNumber = matrix[rowIndex][colIndex];

        if (currNumber == target)
        {
            return true;
        }
        else if (target > currNumber)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return false;
}

int main()
{
    vector<vector<int>> arr{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    int target = 3;

    //   [1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

    bool ans = searchMatrix(arr, target);

    cout << "Search a 2-d Matrix  present or not : " << ans;

    return 0;
}
