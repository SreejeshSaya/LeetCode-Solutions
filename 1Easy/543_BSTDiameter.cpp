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
    int maxDiameter;
    int diameterHelper(TreeNode *root) {
        if(!root) return 0;
        int l=diameterHelper(root->left);
        int r=diameterHelper(root->right);
        maxDiameter = max(maxDiameter, (l+r));
        return max(l, r)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameterHelper(root);
        return maxDiameter;
    }
};