class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        nth_element(nums.begin(), nums.begin()+n-2, nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};