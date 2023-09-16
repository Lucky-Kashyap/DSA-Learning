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
    vector<int> lSum(nums.size(), 0);
    vector<int> rSum(nums.size(), 0);

    for (int i = 1; i < nums.size(); i++)
    {
        lSum[i] = lSum[i - 1] + nums[i - 1];
    }
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rSum[i] = rSum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (lSum[i] == rSum[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{

    vector<int> nums{1, 7, 3, 6, 5, 6};

    cout << "Pivot Index : " << prefixSumApproach(nums) << endl;

    // int pivotIndex(vector<int>& nums) {

    //  return bruteforce(nums);
    // }
};