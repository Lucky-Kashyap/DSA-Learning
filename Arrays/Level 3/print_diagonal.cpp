#include <iostream>
#include <climits>

using namespace std;

void printDiagonal(int arr[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i] << " ";
    }
}

int main()
{

    int arr[3][3] = {
        {10, 20, 7},
        {2, 4, 8},
        {10, 15, 10}};

    int row = 3;
    int col = 3;

    printDiagonal(arr, row);

    return 0;
}
