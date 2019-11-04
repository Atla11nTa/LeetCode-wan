/*
26.remove-duplicates-from-sorted-array
从已排序数组中去除重复数字
*/
#include <vector>
#include <Bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int removeDuplicates(vector<int>& nums) {
        int delete_nums = 0;
        if(nums.size()<=1)
            return nums.size();
        int pre = nums[0];
        int origin_len = nums.size();
        for(int i=1;i<origin_len;i++)
        {
            if(nums[i-delete_nums] == pre)
            {
                nums.erase(nums.begin() + i - delete_nums++);
            }
            else{
                pre = nums[i-delete_nums];
            }
        }
        return nums.size();
    }
};
int main()
{
    vector<int> nums;
    nums = {-1,0,1,1,1,2,2,3,3,4};
    Solution *so = new Solution();
    int size = so->removeDuplicates(nums);
    cout<<size;
    return 0;
}