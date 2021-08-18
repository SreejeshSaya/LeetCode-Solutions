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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev = NULL;

        while(head!=NULL && head->val == val)
            head = head->next;
        
        ListNode *h = head;
        while(h) {
            if(h->val == val) {
                prev->next = h->next;
            }
            else 
                prev = h;
            h = h->next;
        }
        return head;
    }
};
