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
    int l, h;
    int sum;
    void inorder(TreeNode *r) {
        if(r==nullptr) return;
        
        int v=r->val;
        if(l<=v and v<=h) sum+=v;
        
        inorder(r->left);
        inorder(r->right);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        l=low;
        h=high;
        sum=0;
        inorder(root);
        return sum;
    }
};