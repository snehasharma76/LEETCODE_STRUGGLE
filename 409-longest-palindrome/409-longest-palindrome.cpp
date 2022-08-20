class Solution {
public:
    int longestPalindrome(string s) {
          int n = s.length();
        unordered_map <char, int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        int ans=0;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            ans+=((it->second/2)*2);
        }
        if(ans<n) ans++;
        return ans;
    }
};