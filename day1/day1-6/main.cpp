#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //暴力解
        /*
        int max = INT32_MIN;
        for(int i=1;i<prices.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int profile = prices[i] - prices[j];
                if(profile>max)
                    max = profile;
            }
        }
        return max>0?max:0;
         */
        //最优解
        if(prices.empty())
            return 0;
        auto min = prices[0];
        auto profit = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit = max(profit,prices[i]-min);
            }else{
                min = std::min(prices[i],min);
            }
        }
        return min;
    }
};