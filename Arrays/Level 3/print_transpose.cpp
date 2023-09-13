// #include <iostream>
// #include <climits>

// using namespace std;

// void printTranspose(int arr[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int arr[3][3] = {
//         {10, 20, 7},
//         {2, 4, 8},
//         {10, 15, 10}};

//     int row = 3;
//     int col = 3;

//     printTranspose(arr, row, col);

//     return 0;
// }


#include <iostream>
#include <climits>

using namespace std;

void printTranspose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
            // cout << arr[i][j] << " ";
        }
        // cout << endl;
    }
    
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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

    printTranspose(arr, row, col);
    
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}

