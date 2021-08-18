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
    vector<int> inorder;
    void helper(TreeNode* r) {
        if(r == nullptr) return;
        helper(r->left);
        inorder.push_back(r->val);
        helper(r->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        helper(root);
        for(int i=1; i<inorder.size(); ++i) {
            if(inorder[i] <= inorder[i-1]) return false;
        }
        return true;
    }
};