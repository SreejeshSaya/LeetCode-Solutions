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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slo = head;
        ListNode* fas = head;
        for(int i=0; i<n; ++i) fas = fas->next;
        
        if(fas == nullptr) return head->next;
        while(fas->next) {
            slo = slo->next;
            fas = fas->next;
        }
        slo->next = slo->next->next;
        return head;
    }
};