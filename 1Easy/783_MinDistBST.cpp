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
    int prevVal = -1;
    int minDiff = INT_MAX;
    void inorder(TreeNode *root) {
        if(root==nullptr) return;
        
        inorder(root->left);
        if(prevVal == -1) prevVal = root->val;
        else {
            minDiff = min(minDiff, (root->val - prevVal));
            prevVal = root->val;
        }
        inorder(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return minDiff;
    }
};