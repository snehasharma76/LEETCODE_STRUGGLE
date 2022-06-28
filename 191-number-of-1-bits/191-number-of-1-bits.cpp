class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        if(n == 0)return 0;
        return  (n&1) + hammingWeight(n>>1);
           
    }
};