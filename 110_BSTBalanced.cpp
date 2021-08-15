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
public:
    bool bal=true;
    bool isBalanced(TreeNode* root) {
        height(root);
        return bal;
    }        
    
    int height(TreeNode* root) {
        if (!bal)
            return 0;
        if(!root)
            return 0;
        int l = height(root->left);
        if (!bal)
            return 0;
        int r = height(root->right);
        if (!bal)
            return 0;
        bool d = abs(l-r)>1;
        if(d)
            bal=false;
        return max(l, r)+1;
    }
};