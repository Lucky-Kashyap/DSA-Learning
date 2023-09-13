#include <iostream>

using namespace std;

int diagonalSum(int arr[][3], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < row; i++)
    {

        sum += arr[i][row - i - 1];
    }

    return sum;
}

int main()
{

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
