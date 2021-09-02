class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() == 3) return nums[0] * nums[1] * nums[2];
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        
        int fs=nums[0];
        int ss=nums[1];
        int fl=nums[n-1];
        int sl=nums[n-2];
        int tl=nums[n-3];
        int maxProduct = max(fs*ss*fl, fl*sl*tl);
        
        return maxProduct;
    }
};