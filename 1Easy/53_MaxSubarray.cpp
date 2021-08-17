class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int s=0;
        for(int i: nums) {
            s = max(s, 0) + i;
            m=max(m, s);
        }
        return m;
    }
};