class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n;
        n=nums[0];
        for(int i=1;i<nums.size();i++){
            n^=nums[i];
        }
        return n;
    }
};