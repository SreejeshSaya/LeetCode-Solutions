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
    int K;
    int curr;
    int ans;
    void inorder(TreeNode* r) {
        if(r==nullptr || curr>=K) return;
        
        
        inorder(r->left);
        ++curr;
        if(curr==K) {
            ans=r->val;
            return;
        }
        inorder(r->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        K=k;
        curr=0;
        inorder(root);
        return ans;
    }
};