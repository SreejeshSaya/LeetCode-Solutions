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
    int maxDepth;
    int sum;
    void inorder(TreeNode* root, int depth) {
        if(!root) return;
        
        if(depth > maxDepth) {
            maxDepth = depth;
            sum=0;
        }
        if(depth == maxDepth) sum+=root->val;
        
        inorder(root->left, depth+1);
        inorder(root->right, depth+1);
    }
    
public:
    int deepestLeavesSum(TreeNode* root) {
        sum=0;
        maxDepth = 0;
        inorder(root, 0);
        return sum;
    }
};