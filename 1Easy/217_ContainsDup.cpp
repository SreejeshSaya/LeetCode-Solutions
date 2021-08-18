class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> u(nums.begin(), nums.end());
        return nums.size()!=u.size();
    }
};