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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        
        int mSum = INT_MIN;
        int l=0;
        int i=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            ++i;
            int n=q.size();
            int sum(0);
            for(int i=0; i<n; ++i) {
                TreeNode* r = q.front();
                q.pop();
                sum += r->val;
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
            }
            if(sum > mSum) {
                mSum = sum;
                l = i;
            }
        }
        return l;
    }
};