#include <iostream>

using namespace std;

void solve(int arr[], int n)
{

    //   int temp;

    //   int left = 0;
    //   int right=n-1;

    //   while(left<=right){

    //       if(arr[left]>arr[right]){
    //           temp=arr[left];
    //       arr[left]=arr[right];
    //       arr[right]=temp;
    //       }

    //       left++;
    //       right--;
    //   }

    int count = 0, count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
    }

    int i;

    for (i = 0; i < count; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int n = 9;

    solve(arr, n);

    return 0;
}
