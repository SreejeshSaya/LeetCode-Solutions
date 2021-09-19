class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
        int n=nums.size();
        int first, last;
        int l=0, r=n-1;
        while(l<r) {
            int m = l + (r-l)/2;
            if(nums[m] < target) l = m+1;
            else r=m;
        }
        if(nums[l] != target) return {-1, -1};
        first = l;
        r = n-1;
        while(l<r) {
            int m = l + (r-l)/2;
            if(nums[m] <= target) l = m+1;
            else r=m;
        }
        last = l;
        if(nums[last] != target) --last;
        return {first, last};
    }
};
