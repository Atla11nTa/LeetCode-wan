
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 1)
            return true;
        unsigned int p = 4;
        int i = 0;
        while(i<=28)
        {
            if(p == num)
                return true;
            else
            {
                p =p<<2;
                i += 2;
            }
        }
        return false;
    }
};