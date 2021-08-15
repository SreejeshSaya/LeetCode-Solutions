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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        bool r2l=false;
        q.push(root);
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        vector<int> l;
        while(!q.empty()) {
            int n = q.size();
            for(int i=0; i<n; ++i) {
                TreeNode* t = q.front();
                q.pop();
                l.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(r2l) reverse(l.begin(), l.end());
            r2l = !r2l;
            ans.push_back(l);
            l.clear();
        }
        return ans;
    }
};