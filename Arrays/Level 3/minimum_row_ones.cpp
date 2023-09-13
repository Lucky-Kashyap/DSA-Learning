#include <iostream>
#include <vector>

using namespace std;

void separateNumber(int arr[][3], int row, int col)
{

    // int temp[]={1};

    vector<int> temp;

    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; i++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }
    temp.push_back(1);
    temp.push_back(count);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    // for(auto at it:temp){
    //     cout<<temp[it]<<" ";
    // }

    // for(int i=0;i<(sizeof(temp)/sizeof(int));i++){
    //     cout<<temp[i]<<" ";
    // }
}

int main()
{

    int arr[2][3] = {{0, 0, 0}, {0, 1, 1}};

    int row = 2;
    int col = 3;

    separateNumber(arr, row, col);

    // int size = sizeof(arr)/sizeof(int);

    //   int res =  separateNumber(arr,size);

    //   cout<<res<<endl;

    return 0;
}
