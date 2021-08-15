class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && q)
            return false;
        if(p && !q)
            return false;
        if(!p && !q)
            return true;
        return p->val==q->val and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    }
};