#include<bits/stdc++.h>
using namespace std;
int trailingZeroes(int n) {
        long long sum  = 1;
        for(int i=1;i<=n;i++)
            sum *= i;
        string str = std::to_string(sum);
        int count = 0;
        int len = str.length();
        for(int i = len-1;i>=0;i--)
        {
            if(str[i] == '0')
                count++;
            else{
                break;
            }
        }
        return count;
}

int main()
{
    trailingZeroes(13);
}