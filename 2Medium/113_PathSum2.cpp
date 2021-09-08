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
    vector<vector<int>> paths;
    vector<int> path;
    int tSum;
    
    void preorder(TreeNode* root, int sum) {
        if(!root) return;
        
        path.push_back(root->val);
        sum += root->val;
        if(!root->left && !root->right && (sum == tSum)) paths.push_back(path);
        
        preorder(root->left, sum);
        preorder(root->right, sum);
        
        path.pop_back();
    }
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        tSum = targetSum;
        path.clear();
        path.reserve(13);
        
        preorder(root, 0);
        return paths;
    }
};