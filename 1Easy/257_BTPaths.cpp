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
    vector<int> path;
    vector<string> paths;
    
    void addPath() {
        string p(to_string(path[0]));
        for(int i=1; i<path.size(); ++i) {
            p += "->" + to_string(path[i]);
        }
        paths.push_back(p);
    }
    
    void root2Leaf(TreeNode *root) {
        path.push_back(root->val);
        if(!root->left && !root->right)  {
            addPath();
            path.pop_back();
            return;
        }
        
        if(root->left) root2Leaf(root->left);
        if(root->right) root2Leaf(root->right); 
        path.pop_back();
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == nullptr) return {};
        
        root2Leaf(root);
        return paths;
    }
};