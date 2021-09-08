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
    TreeNode* build(vector<int>& io, vector<int>& po, int &rIdx, int l, int r) {
        if(l>r) return NULL;
        
        int pivot = ump[po[rIdx--]];
        
        TreeNode* node = new TreeNode(io[pivot]);
        
        node->right = build(io, po, rIdx, pivot+1, r);
        node->left = build(io, po, rIdx, l, pivot-1);
        
        return node;
    }
    
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int rootIdx=postorder.size()-1;
        for(int i=0;i<inorder.size();i++) ump[inorder[i]]=i;
        
        return build(inorder, postorder, rootIdx, 0, inorder.size()-1);
        
    }
};
