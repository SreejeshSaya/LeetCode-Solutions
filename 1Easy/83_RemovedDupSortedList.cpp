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
        ListNode* p = head;
        ListNode *temp = p;
        while(p) {
            temp = p->next;
            while(temp != nullptr && p->val == temp->val) {
                p->next = temp->next;
                temp = p->next;
            }
            p = temp;
        }
        return head;
    }
};