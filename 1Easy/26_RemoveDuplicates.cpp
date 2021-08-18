class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if(s==0)
            return 0;
        
        int i = 0;
        for (int f=1; f<s; ++f) {
            if(nums[f] != nums[i])
                nums[++i] = nums[f];
        }
        return i+1;
    }
};