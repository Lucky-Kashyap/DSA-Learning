#include <iostream>

using namespace std;

bool findElement(int arr[][3], int row, int col, int target)
{

    bool found = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                found = true;
                break;
            }
        }
    }

    return found;
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
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int target = 100;

    int row = 3;
    int col = 3;

    // cout<<"\nPrint array : "<<endl;
    bool res = findElement(arr, row, col, target);

    if (res)
    {
        cout << "Targeted element is found" << endl;
    }
    else
    {
        cout << "Targeted element does not found" << endl;
    }

    return 0;
}
