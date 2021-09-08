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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *sen = new ListNode(0, head);
        ListNode *prev = sen;
        ListNode *h = head;
        while(h) {
            if(h->next && h->next->val == h->val) {
                while(h->next && h->next->val == h->val) h=h->next;
                prev->next = h->next;
            }
            else prev = prev->next;
            h = h->next;
        }
        
        return sen->next;
    }
};