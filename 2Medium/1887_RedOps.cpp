// Own: very slow
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int, int, greater<int>> f;
        for(int n: nums) f[n]++;
        
        set<int> s(nums.begin(), nums.end());
        int iN = s.size()-1;
        
        int cnt=0;
        for(map<int, int>::iterator it=f.begin(); it!=f.end(); ++it) {
            cnt+= it->second*iN;
            iN--;
        }
        return cnt;
    }
};

// Faster:
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]!=nums[i]) ans+=n-i;
        }
        return ans;
    }
};