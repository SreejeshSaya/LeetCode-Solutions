class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> n(101, 0);
        for(int i: nums) {
            n[i]++;
        }
        
        int sum=0;
        for(int i=0; i<=100; ++i) {
            if(n[i]==1) sum+=i;
        }
        
        return sum;
    }
};