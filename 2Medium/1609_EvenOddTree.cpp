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
    bool isEvenOddTree(TreeNode* root) {
        bool eLevel = true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            TreeNode *prev = q.front();
            q.pop();
            
            if(eLevel && prev->val % 2 == 0) return false;
            if(!eLevel && prev->val % 2 == 1) return false;
            
            if(prev->left) q.push(prev->left);
            if(prev->right) q.push(prev->right);
            
            for(int i=1; i<n; ++i) {
                TreeNode *curr = q.front();
                q.pop();
                if(eLevel && (curr->val % 2 == 0 || curr->val <= prev->val)) return false;
                if(!eLevel && (curr->val % 2 == 1 || curr->val >= prev->val)) return false;
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                prev = curr;
            }
            eLevel = !eLevel;
        }
        return true;
    }
};