#include <vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        auto len = nums.size();
        if(len == 1)
            return nums[0];
        int *dp = new int[len];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<len;i++)
        {
            dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[len-1];
    }
};