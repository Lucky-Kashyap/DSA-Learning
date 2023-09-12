#include <iostream>

using namespace std;

// by pasing array to fucntion we have give size arr[][3]

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int row = 4;
    int col = 3;

    printArray(arr, row, col);

    return 0;
}
