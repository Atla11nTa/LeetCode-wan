#include <bits/stdc++.h>
#include <hash_map>
using namespace std;
using namespace __gnu_cxx;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        hash_map<char,int> map;
        int max_len = 0;
        int current_len = 0;
        for(int i=0;i<s.length();i++)
        {
            if(map.count(s[i]) == 0)
            {
                map.insert(pair<char,int>(s[i],1));
                current_len++;
            }
            else{
                while(current_len>1)
                {
                    if(s[i] == s[i-current_len])
                    {
                        break;
                    }
                    else{
                        map.erase(s[i-current_len]);
                        current_len--;
                    }
                }
            }
            max_len = current_len>max_len?current_len:max_len;
        }
        return max_len;
    }
};

int main()
{
    Solution *so = new Solution();
    int len = so->lengthOfLongestSubstring("abcabcbb");
    cout<<len;
    return 0;
}