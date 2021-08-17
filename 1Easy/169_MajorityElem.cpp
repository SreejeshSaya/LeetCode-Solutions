class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums[0];
        int cnt=0;
        for(int i: nums) {
            if(cnt == 0) n=i;
            
            cnt += (n==i)? 1:-1;
        }
        return n;
    }
};