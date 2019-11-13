/*
53.maximum-sum-subarray-cn
求串的最大连续子串和
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int findMax(vector<int> &nums,int begin,int end)
    {
        if(begin > end)
        {
            return INT32_MIN;
        }
        else{
            int index = begin + (end - begin)/2;
            int left = findMax(nums,begin,index-1);
            int right = findMax(nums,index+1,end);
            int sum =0;
            int leftMaxSum =0;
            for(int i = index-1;i>=begin;i--)
            {
                sum += nums[i];
                leftMaxSum = max(leftMaxSum,sum);
            }
            int rightMaxSum = 0;
            sum = 0;
            for (int i = index + 1; i <= end; i++) {
                sum += nums[i];
                rightMaxSum = max(sum, rightMaxSum);
            }
            return max(leftMaxSum + rightMaxSum + nums[index], max(left, right));
        }
    }
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int max = findMax(nums,0,nums.size()-1);
        return max;
    }
};

int main()
{
    vector<int> nums;
    nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution *so = new Solution;
    int len = so->maxSubArray(nums);
    cout<<len;
    return 0;
}