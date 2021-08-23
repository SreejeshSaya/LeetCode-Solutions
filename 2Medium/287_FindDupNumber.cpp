class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slo, fas;
        slo = fas = nums[0];
        
        do {
            slo = nums[slo];
            fas = nums[nums[fas]];
            // if(slo == fas) return slo;
        } while(slo != fas);
        
        slo = nums[0];
        while(slo != fas) {
            slo = nums[slo];
            fas = nums[fas];
        }
        return slo;
    }
};