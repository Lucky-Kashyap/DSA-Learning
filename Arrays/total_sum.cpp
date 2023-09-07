#include <iostream>

using namespace std;

int main()
{

    int arr[5];

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at index : " << i << " ";
        cin >> arr[i];
        sum += arr[i];
        cout << endl;
    }

    cout << "Total Sum of Eements in an Array : " << sum << endl;

    return 0;
}
