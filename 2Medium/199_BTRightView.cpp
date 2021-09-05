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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> rView;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            TreeNode *r = q.front();
            q.pop();
            rView.push_back(r->val);
            if(r->right) q.push(r->right);
            if(r->left) q.push(r->left);
            for(int i=1; i<n; ++i) {
                r = q.front();
                q.pop();
                if(r->right) q.push(r->right);
                if(r->left) q.push(r->left);
            }
        }
        return rView;
    }
};