class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;
		ListNode preHead(0), *p = &preHead;

		while (l1 || l2 || carry) {
			int d1 = 0;
			int d2 = 0;
			if (l1) d1 = (l1->val);
			if (l2) d2 = (l2->val);
			
			int sum = d1+d2+carry;
			
			if (sum >= 10) {
				sum -= 10;
				carry = 1;
			}
			else carry = 0;

			p->next = new ListNode(sum);

			if (l1) l1 = l1->next;
			if (l2) l2 = l2->next;
			p = p->next;
			
		}
		
		return preHead.next;
	}
};