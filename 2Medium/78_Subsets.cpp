class Solution {
private:
    vector<vector<int>> pSet;
    vector<int> s;
    void helper(vector<int> &nums, int n, int i) {
        s.push_back(nums[i]);
        pSet.push_back(s);
        
        for(int j=i+1; j<n; ++j) { helper(nums, n, j); }
        
        s.pop_back();
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        pSet.clear();
        s.clear();
        s.reserve(n);
        pSet.push_back({});
        for(int i=0; i<n; ++i) { helper(nums, n, i); }
        
        return pSet;
    }
};

// Cascading Method
// class Solution: #Python
//     def subsets(self, nums: List[int]) -> List[List[int]]:
//         n = len(nums)
//         output = [[]]
        
//         for num in nums:
//             output += [curr + [num] for curr in output]
        
//         return output

// class Solution { //C++
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> pSet{{}};

//         for(int i: nums) {
//             vector<vector<int>> nSets(pSet);
//             for(vector<int> c: nSets) { 
//                 c.push_back(i);
//                 pSet.push_back(c);
//             }
//         }
//         return pSet;
//     }
// };