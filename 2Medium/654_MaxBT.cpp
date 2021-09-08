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
    TreeNode* constructNode(vector<int>& nums, int l, int r) {
        if(l>r) return nullptr;
        
        int m = max_element(nums.begin()+l, nums.begin()+r+1) - nums.begin();
        TreeNode *root = new TreeNode(nums[m]);
        root->left = constructNode(nums, l, m-1);
        root->right = constructNode(nums, m+1, r);
        return root;
    }
    
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructNode(nums, 0, nums.size()-1); 
    }
};