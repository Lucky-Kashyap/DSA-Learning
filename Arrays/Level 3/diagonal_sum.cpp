#include <iostream>

using namespace std;

int diagonalSum(int arr[][3], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[j][i];
            }
        }
    }

    return sum;
}

int main()
{
    // int arr[4][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9},
    //     {10,11,12}
    // };

    // int row=4;
    // int col=3;

    int arr[3][3] = {
        {10, 20, 7},
        {2, 4, 8},
        {10, 15, 10}};

    int row = 3;
    int col = 3;

    int res = diagonalSum(arr, row, col);

    cout << "Diagonal wise Sum : " << res << endl;

    return 0;
}
