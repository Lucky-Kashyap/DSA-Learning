#include <iostream>
#include <climits>

using namespace std;

void rowWiseSum(int arr[][4], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row wise sum : " << sum << endl;
    }

    // return sum;
}

int main()
{

    int arr[3][4] = {
        {10, 20, 5, 7},
        {2, 4, 6, 8},
        {10, 15, 15, 10}};

    int row = 3;
    int col = 4;
    int res;
    rowWiseSum(arr, row, col);

    // cout<<"Row wise Sum : "<<res<<endl;

    return 0;
}
