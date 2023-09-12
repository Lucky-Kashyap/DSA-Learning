#include <iostream>
#include <climits>

using namespace std;

void colWiseSum(int arr[][4], int row, int col)
{
    int sum = 0;

    for (int i = 0; i < col; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "Column wise sum : " << sum << endl;
    }

    // return sum;
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

    int arr[3][4] = {
        {10, 20, 5, 7},
        {2, 4, 6, 8},
        {10, 15, 15, 10}};

    int row = 3;
    int col = 4;
    int res;
    colWiseSum(arr, row, col);

    // cout<<"Row wise Sum : "<<res<<endl;

    return 0;
}
