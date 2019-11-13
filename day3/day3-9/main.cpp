#include <bits/stdc++.h>
#include <vector>
using  namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(),candies.end());
        int last = candies[0];
        int count  = 1;
        int max_size = candies.size()/2;
        for(int i=1;i<candies.size();i++)
        {
            if(count == max_size)
                break;
            if(candies[i] != last)
            {
                count++;
            }
            last = candies[i];
        }
        return count;
    }
};