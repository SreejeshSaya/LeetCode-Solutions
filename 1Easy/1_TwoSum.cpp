class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> r;
        int s = nums.size();
        for(int i=0; i<s; ++i) {
            int c = target - nums[i];
            if(m.count(c)){
                r.push_back(m[c]);
                r.push_back(i);
                break;
            }
            else {
                pair<int, int> p(nums[i], i);
                m.insert(p);
            }
                
        }
        return r;
    }
};