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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode *head, *other, *first;
        if(l1->val < l2->val) {
            head = l1;
            first = l1;
            other = l2;
        }
        else {
            head = l2;
            first = l2;
            other = l1;
        }
        
        ListNode* p, *q;
        while(first->next && other) {
            if(first->next->val < other->val) {
                first = first->next;
            }
            else {
                p = first->next;
                q = other->next;
                
                first->next = other;
                other->next = p;
                first = other;
                other = q;                
            }
        }
        if(!first->next) first->next = other;
        return head;
        
    }
};

// Recursion
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        if(l1->val < l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};