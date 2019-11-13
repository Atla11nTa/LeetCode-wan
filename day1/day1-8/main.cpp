/*
 * 125. Valid Palindrome
 *检查是否为回文子串，仅考察字母和数字
*/

/* todo:知识点
 * isalnum()判断参数是否为数字或字母
 */


#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0)
            return true;
        char new_s[10000];
        int index=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))
            {
                new_s[index++] = s[i]>=97?s[i]-32:s[i];
            }
        }
        for(int i=0;i<index/2;i++)
        {
            if(new_s[i] != new_s[index-i-1])
                return false;
        }
        return true;
    }
};
int main()
{
    Solution *so = new Solution;
    if(so->isPalindrome("A man, a plan, a canal: Panama"))
        cout<<"true";
}