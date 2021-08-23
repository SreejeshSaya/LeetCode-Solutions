class Solution {
private:
    vector<bool> v;
    vector<vector<int>> permuts;
    vector<int> perm;
    
    void permutations(vector<int>& nums, int k) {
        perm.push_back(nums[k]);
        v[k]=true;
        
        if(perm.size() == nums.size()) {
            // for(int i: perm) {
            //     cout << i << "\t";
            // }
            // cout << endl;
            permuts.push_back(perm);
        }
        else {
            for(int i=0; i<nums.size(); ++i) {
                if(v[i] == false)
                    permutations(nums, i);
            }
        }
        perm.pop_back();
        v[k]=false;
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        perm.clear();
        perm.reserve(nums.size());
        v.clear();
        v.resize(nums.size());
        
        permuts.clear();
        permuts.reserve(720);
        
        for(int i=0; i<nums.size(); ++i) {
            permutations(nums, i);
        }
        return permuts;
    }
};