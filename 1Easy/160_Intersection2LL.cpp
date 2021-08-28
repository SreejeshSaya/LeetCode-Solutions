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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        if (a == NULL || b == NULL){
            return NULL;
        }
        
        while (a != b){
            a = (a == NULL ? headB : a->next);
            b = (b == NULL ? headA : b->next);
            
            if (a == headA && b == headB){
                return NULL;
            }
        }
        
        return a;
    }
};

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         vector<ListNode*> vecA;
//         vector<ListNode*> vecB;
//         ListNode* ptrA = headA;
//         while(ptrA != nullptr) {
//             vecA.push_back(ptrA);
//             ptrA = ptrA->next;
//         }
//         ListNode* ptrB = headB;
//         while(ptrB != nullptr) {
//             vecB.push_back(ptrB);
//             ptrB = ptrB->next;
//         }
//         ListNode* intersection = nullptr;
//         for(int a = 0; a < vecA.size() && a < vecB.size(); a++) {
//             if(vecA[vecA.size()-1-a] == vecB[vecB.size()-1-a]) {
//                 intersection = vecA[vecA.size()-1-a];
//             }
//         }
//         return intersection;
//     }
// };