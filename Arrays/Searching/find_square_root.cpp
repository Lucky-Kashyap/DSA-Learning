#include <iostream>

using namespace std;

int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        // kya mid hi toh answer nahi
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // ans store
            // right me jao
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // left me jana h
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n);
    int precision = 4;
    double step = 0.1;
    for (int i = 0; i < precision; ++i)
    {
        double j = sqrt;
        while (j * j <= n)
        {
            sqrt = j;
            j += step;
        }
        step /= 10;
    }
    return sqrt;
}

int main()
{
    // vector<int>arr;

    int num = 5;

    // cout << "Square root  of a " << num << " : " << mySqrt(num);
    cout<<"Square root of a "<<num<<" : "<<myPrecisionSqrt(num);

    return 0;
}
