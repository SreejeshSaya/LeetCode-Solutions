/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    TreeNode* ans;
    void inorder(TreeNode* o, TreeNode* c, TreeNode* t) {
       if(!o) return;
        
        inorder(o->left, c->left, t);
        if(o == t) ans = c;
        inorder(o->right, c->right, t);
    }
    
public:
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        inorder(o, c, t);
        return ans;
    }
};