class Solution {
private:
    int robOriginal(vector<int>& nums, int s, int e) {
        int n=e-s;
        if(n==1) return nums[s];
        if(n==2) return max(nums[s], nums[e]);
        
        vector<int> dp(n, 0);
        dp[0] = nums[s];
        dp[1] = max(nums[s], nums[s+1]);
        for(int i=2; i<n; ++i) { dp[i] = max(dp[i-1], dp[i-2] + nums[s+i]); }
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return nums[0];
        else if(n == 2) return max(nums[0], nums[1]);
        else return max(robOriginal(nums, 0, n-1), robOriginal(nums, 1, n));
    }
};