/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* helper(vector<int>& nums, int s, int e) {
        if(s>e) return nullptr;
        
        int m = (s+e)/2;
        TreeNode* r = new TreeNode(nums[m]);
        
        r->left = helper(nums, s, m-1);
        r->right = helper(nums, m+1, e);
        return r;
        
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return helper(nums, 0, nums.size()-1);
    }
};