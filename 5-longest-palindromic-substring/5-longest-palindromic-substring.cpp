class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<2)return s;
        int maxlength = 0, start = 0, end = 0;
        int low, high;
        for(int i = 0; i<n; i++){
            low = i-1;
            high = i+1;
            
            while(high > n && s[high]==s[i])high++;
            
            while(low>=0 && s[low]==s[i])low--;
            
            while(low>=0 && high<n && s[high]==s[low]){
                high++;
                low--;
            }
        
            int length = high-low-1;
        if(maxlength < length){
        maxlength = length;
        start = low+1;
        }
        }
        return s.substr(start, maxlength);
        
    }
};