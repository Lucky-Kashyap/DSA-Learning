#include <iostream>

using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
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

    int arr[4][3];

    int row = 4;
    int col = 3;

    cout << "Input elements : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nPrint array : " << endl;
    printArray(arr, row, col);

    return 0;
}
