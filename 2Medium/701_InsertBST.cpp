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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr) return new TreeNode(val);
        
        if(root->val > val) root->left = insertIntoBST(root->left, val);
        else root->right = insertIntoBST(root->right, val);
        
        return root;
    }
};

// Iterative
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* F = root;
        TreeNode* ans = new TreeNode;
        ans->val = val;
        if(root == NULL) return ans;
        bool done = false;
        while(done == false){
            if(val>root->val){
                if(root->right == NULL){ 
                    root->right = ans;
                    done = true;
                    break;
                }
                else root = root->right;
            }
            else if( val<root->val){
                if(root->left == NULL){
                    root->left = ans;
                    done = true;
                    break;
                }    
                else root = root->left;
            }
            
        }
        return F;
    }
};