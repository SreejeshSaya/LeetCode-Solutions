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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nxtG;
        stack<int> s;
        int i=-1;
        for(ListNode* h=head; h!=nullptr; h=h->next) {
            int n=h->val;
            while(!s.empty() && nxtG[s.top()] < n) {
                nxtG[s.top()] = n;
                s.pop();
            }
            s.push(++i);
            nxtG.push_back(n);
        }
        
        while(!s.empty()) {
            int t=s.top();
            s.pop();
            nxtG[t] = 0;
        }
        return nxtG;
    }
};