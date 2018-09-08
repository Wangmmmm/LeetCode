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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0) ;
		ListNode* p=head;
		ListNode* p1=l1;
		ListNode* p2=l2;
		int carryBit=0;
		while(p1!=nullptr && p2!=nullptr)
		{
			int result = p1->val + p2->val + carryBit;
			if(result>=10)
			{
				carryBit=1;
				result=result%10;
			}
			else carryBit=0;
			p1=p1->next;
			p2=p2->next;
			p->next=new ListNode(result);
			p=p->next;
		}
		ListNode* endP;
		if(p1==nullptr && p2!=nullptr)endP=p2;
		else if(p1!=nullptr && p2==nullptr)endP=p1;
		else {
			if(carryBit==1)
			{
				p->next=new ListNode(1);
			
			}
			ListNode* result=head->next;
			delete(head);
			return result;
		}
		while(endP!=nullptr)
		{
			int result = endP->val+carryBit;
			if(result>=10)
			{
				carryBit=1;
				result=result%10;
			}
			else carryBit=0;
			p->next=new ListNode(result);
			p=p->next;
			endP=endP->next;
		}
		if(carryBit==1)
			{
				p->next=new ListNode(1);
			}
		ListNode* result=head->next;
			delete(head);
			return result;
    }
	
};