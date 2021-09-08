class Solution {
    TreeNode* toBST(ListNode* head, ListNode* tail) {
        if(head == tail) return nullptr;
        ListNode *s = head;
        ListNode *f = head;
        while(f != tail && f->next != tail) {
            f = f->next->next;
            s = s->next;
        }
        
        TreeNode *n = new TreeNode(s->val);
        n->left = toBST(head, s);
        n->right = toBST(s->next, tail);
        
        return n;
    }
    
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        return toBST(head, nullptr);
    }
};