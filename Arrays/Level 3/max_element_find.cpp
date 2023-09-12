#include <iostream>
#include <climits>

using namespace std;

int maxElement(int arr[][3], int row, int col)
{

    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int main()
{

    int arr[3][3] = {
        {10, 20, 30},
        {40, 100, 60},
        {70, 80, 90}};

    int row = 3;
    int col = 3;

    int res = maxElement(arr, row, col);

    cout << "Maximum element : " << res << endl;

    return 0;
}
