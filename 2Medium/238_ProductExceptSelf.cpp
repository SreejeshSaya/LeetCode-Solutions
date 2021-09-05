class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prod(n);
        prod[0]=1;
        for(int i=1; i<n; ++i) prod[i] = prod[i-1]*nums[i-1];
        int rightP=1;
        for(int i=n-1; i>=0; --i) {
            prod[i] *= rightP;
            rightP *= nums[i];
        }
        return prod;
    }
};