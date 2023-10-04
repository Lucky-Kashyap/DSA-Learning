// #include <iostream>
// #include<climits>

// using namespace std;

// int reverseInteger(int num){

//     int rev=0;
//     int temp = num;
// bool flag=false;

//     if(temp<=INT_MIN){
//         return 0;
//     }
//     if(temp<0){
//         flag=true;
//         temp=-temp;
//     }

//     while(temp!=0){
//         if(rev>INT_MAX/10){
//             return 0;
//         }
//         int rem = temp%10;
//         rev =rev*10 + rem;
//         temp=temp/10;
//     }

//     return flag?-rev:rev;
// }

// int main()
// {
//     int n;
//     cin>>n;

//    cout<<"Reverse Integer of "<<n<<" is : "<<reverseInteger(n)<<endl;

//     return 0;
// }

#include <iostream>
#include <climits>
using namespace std;
int reverse(int x)
{

    int ans = 0, rem;
    while (x != 0)
    {
        rem = x % 10;
        x = x / 10;

        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + rem;
    }

    return ans;
}
int main()
{
    int num = 123456789;

    int res = reverse(num);

    cout << res << endl;

    return 0;
}
