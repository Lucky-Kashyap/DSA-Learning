#include <iostream>
#include <vector>
using namespace std;

int bruteforce(vector<int> &nums)
{

    for (int i = 0; nums.size(); ++i)
    {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++)
            leftSum += nums[j];

        for (int j = i + 1; j < nums.size(); j++)
            rightSum += nums[j];

        // cout<<leftSum<<endl;
        if (leftSum == rightSum)
            return i;
    }

    return -1;
}
int prefixSumApproach(vector<int> &nums)
{
    return -1;
}
int main(){

    // vector <int>nums;

    // int pivotIndex(vector<int>& nums) {

    //  return bruteforce(nums);
    // }

};