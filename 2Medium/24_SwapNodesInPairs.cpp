/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *c(head);
        ListNode *nHead(head->next);
        while(c && c->next) {
            ListNode *t = c;
            c = c->next;
            t->next = c->next;
            c->next = t;
            c = t->next;
            if(c && c->next) t->next = c->next;
        }
        return nHead;
    }
};