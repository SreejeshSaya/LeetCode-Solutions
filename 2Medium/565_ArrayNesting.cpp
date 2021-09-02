class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; ++i) {
            if(visited[i] == false) {
                int cnt=0;
                int j=i;
                while(visited[j] != true) {
                    visited[j]= true;
                    j = nums[j];
                    ++cnt;
                }
                ans = max(ans, cnt);
            }
        }
        
        return ans;
    }
};