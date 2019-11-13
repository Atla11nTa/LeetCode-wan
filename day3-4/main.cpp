#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(nums[i] == 0)
                count++;
            else if (count != 0){
                nums[i-count] = nums[i];
                nums[i] = 0;
            }
        }
    }
};