#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        auto ret = 0;
        for (auto i : nums) ret ^= i;
        return ret;
    }
};

int main()
{
    Solution *so = new Solution;
    vector<int> nums = {1,3,1,-1,3};
    int num = so->singleNumber(nums);
    cout<<num;
}