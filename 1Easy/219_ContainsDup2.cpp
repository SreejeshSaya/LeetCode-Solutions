class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mv;
        int i,j,n=nums.size();
        for(i=0;i<n;++i){
            if(mv.count(nums[i]))
                if(abs(mv[nums[i]]-i)<=k)
                    return true;
                
            mv[nums[i]]=i;
        }
        return false;
    }
};