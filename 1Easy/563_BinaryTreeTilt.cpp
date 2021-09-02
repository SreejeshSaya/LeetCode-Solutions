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
    int tilt;
    int helper(TreeNode *r) {        
        int left=0, right=0;
        if(r->left) left = helper(r->left);
        if(r->right) right = helper(r->right);

        tilt += abs(left - right);
        return r->val + left + right;
    }
public:
    int findTilt(TreeNode* root) {
        tilt = 0;
        if(root) helper(root);
        return tilt;
    }
};