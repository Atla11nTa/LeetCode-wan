#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        auto x = (unsigned int)a;
        auto y = (unsigned int)b;
        while(y != 0){
            unsigned int carry = x & y;
            x = x ^ y;
            y = carry << 1;
        }
        return (int)x;
    }
};