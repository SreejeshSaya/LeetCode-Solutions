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
    void pushLeft(stack<TreeNode*> &s, TreeNode *r) {
        while(r) s.push(exchange(r, r->left));
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> io;
        stack<TreeNode*> s1, s2;
        
        pushLeft(s1, root1);
        pushLeft(s2, root2);
        while(!s1.empty() && !s2.empty()) {
            TreeNode *r1 = s1.top();
            TreeNode *r2 = s2.top();
            
            if(r1->val < r2->val) {
                io.push_back(r1->val);
                s1.pop();
                pushLeft(s1, r1->right);
            }
            else {
                io.push_back(r2->val);
                s2.pop();
                pushLeft(s2, r2->right);
            }
        }
        
        while(!s1.empty()) {
            TreeNode* r1 = s1.top();
            s1.pop();
            io.push_back(r1->val);
            pushLeft(s1, r1->right);
        }
        while(!s2.empty()) {
            TreeNode* r2 = s2.top();
            io.push_back(r2->val);
            s2.pop();
            pushLeft(s2, r2->right);
        }
        return io;
    }
};