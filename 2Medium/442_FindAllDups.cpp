class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dups;
        dups.reserve(n);
        
        for(int i: nums) {
            if(nums[abs(i)-1] < 0) 
                dups.push_back(abs(i));
            else 
                nums[abs(i)-1] *= -1;
        }
        
        return dups;
    }
};