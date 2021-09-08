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
    unordered_map<int, int> ump;
    TreeNode* build(vector<int>& io, vector<int>& pe, int &rIdx, int l, int r) {
        if(l>r) return nullptr;
        
        int pivot = ump[pe[rIdx++]];
        
        TreeNode* node = new TreeNode(io[pivot]);
        
        node->left = build(io, pe, rIdx, l, pivot-1);
        node->right = build(io, pe, rIdx, pivot+1, r);
        
        return node;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx=0;
        for(int i=0; i<inorder.size(); i++) ump[inorder[i]]=i;
        
        return build(inorder, preorder, rootIdx, 0, inorder.size()-1);
    }
};