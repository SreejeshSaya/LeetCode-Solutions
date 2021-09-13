class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> m;
        int cnt=0;
        int sum=0;
        m[0]=1;
        for(int i: nums) {
            sum += i;
            if(m.find(sum-k) != m.end()) cnt += m[sum-k];
            ++m[sum];
        }
        return cnt;
    }
};