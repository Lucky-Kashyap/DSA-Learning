#include <iostream>

using namespace std;

void rotateImage(int arr[][3], int row, int col)
{

    int temp[3][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = arr[col - i - 1][j];
            // cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // temp[i][j]=arr[col-i-1][j];
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }

    // 7 8 9
    // 4 5 6
    // 1 2 3
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    int row = 3;
    int col = 3;

    rotateImage(arr, row, col);

    return 0;
}
