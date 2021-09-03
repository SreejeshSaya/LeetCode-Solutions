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
private:
    ListNode* midPoint(ListNode* head) {
        ListNode* slo, *fas;
        slo = head;
        fas = head;
        while(fas->next && fas->next->next) {
            slo = slo->next;
            fas = fas->next->next;
        }
        
        return slo;
    }
    
    ListNode* reverseHalf(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nxt;
        while(curr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return true;    
    
        ListNode* m=midPoint(head);
        ListNode* rev=reverseHalf(m->next);
        
        ListNode* p1=head;
        ListNode* p2=rev;
        
        bool result=true;
        while(result && p2)  {
            if(p1->val != p2->val) result=false;
            p1 = p1->next;
            p2 = p2->next;
        }
        
        m->next = reverseHalf(rev);
        return result;
    }
};