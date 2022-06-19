class Solution {
public:
    bool isPalindrome(int x) {
        long long result = 0;
        long long temp = x;
        if(x<0)return false;
        while(x>0){
            long long rem = x%10;
            result = (result*10)+rem;
            x = x/10;
        }
        //cout << temp << " " << result;
        if(temp == result)return true;
        return false;
        
    }
};