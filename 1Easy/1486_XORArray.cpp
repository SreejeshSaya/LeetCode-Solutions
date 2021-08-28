class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n, start);
        int x=0;
        for(int i=0; i<n; ++i) {
            nums[i] += 2*i;
            x ^= nums[i];
        }
        return x;
    }
};