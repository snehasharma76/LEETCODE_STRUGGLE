class Solution {
public:
    bool isPalindrome(int x) {
       long long  result = 0;
        int temp = 0;
        temp = x;
        if(x<0)return false;
        while(x!=0){
            long long digit = x%10;
            result = (result*10)+digit;
            x = x/10;
            //temp = rem;
        }
        return (temp==result);
    }
};