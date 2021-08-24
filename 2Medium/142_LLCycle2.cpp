/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slo, *fas;
        slo = fas = head;
        while(fas && fas->next) {
            fas = fas->next->next;
            slo = slo->next;
            if(slo == fas) break;
        }
        
        if(fas==nullptr || fas->next == nullptr) return nullptr;
        
        slo = head;
        while(slo != fas) {
            slo = slo->next;
            fas = fas->next;
        }
        return slo;
    }
};