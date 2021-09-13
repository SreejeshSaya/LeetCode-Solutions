class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return 0;
        
        int jmps=0, maxReach=0, cEnd=0;
        
        for(int i=0; i<n-1; ++i) {
            maxReach = max(maxReach, i+nums[i]);   
            if(i == cEnd) {
                ++jmps;
                cEnd = maxReach;
            }
        }
        return jmps;
    }
};