class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> l, r, cnt;
        int degree=0;
        for(int i=0; i<nums.size(); ++i) {
            if(l.find(nums[i]) == l.end()) l[nums[i]] = i;
            r[nums[i]] = i;
            ++cnt[nums[i]];
            degree = max(degree, cnt[nums[i]]);
        }
        int length = nums.size();
        for(pair<int, int> it: cnt) {
            if(it.second == degree) {
                length = min(length, r[it.first] - l[it.first]+1);
            }
        }
        return length;
    }
};