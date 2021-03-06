class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<h) {
            int m=(h-l)/2 + l;
            if((m%2==0 && nums[m] == nums[m+1]) || (m%2==1 && nums[m] == nums[m-1])) l=m+1;
            else h=m;
        }
        
        return nums[l];
    }
};