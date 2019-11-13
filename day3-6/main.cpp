#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> map;
        vector<int> re;
        for(int i=0;i<nums1.size();i++)
        {
            if(map.count(nums1[i]) == 0)
            {
                map.insert(pair<int,int>(nums1[i],1));
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(map.count(nums2[i]))
            {
                re.push_back(nums2[i]);
                map.erase(nums2[i]);
            }
        }
        return re;
    }
};