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
    int sum;
    int val;
    void preorder(TreeNode *root) {
        if(root==nullptr) return;
        val = val*10 + root->val;
        if(!root->left && !root->right) 
            sum+=val;
        preorder(root->left);
        preorder(root->right);
        val /= 10;
    }
public:
    int sumNumbers(TreeNode* root) {
        sum=0;
        preorder(root);
        return sum;
    }
};