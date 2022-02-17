class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size() != l;
    }
};