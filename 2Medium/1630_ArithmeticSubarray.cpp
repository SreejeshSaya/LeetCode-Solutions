class Solution {
private:
    bool isValid(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int d=nums[1]-nums[0];
        for(int i=2; i<nums.size(); ++i) {
            if(nums[i]-nums[i-1] != d) return false;
        }
        return true;
    }
    
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        int n=nums.size();
        vector<bool> valid(m, false);
        for(int i=0; i<m; ++i) {
            vector<int> inner(nums.begin()+l[i], nums.begin()+r[i]+1);
            valid[i] = isValid(inner);
            
        }
        return valid;
    }
};