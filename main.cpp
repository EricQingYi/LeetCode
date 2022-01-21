#include <iostream>
#include "RemoveNthNodeFromEndOfList.h"
using namespace std;

int main() {
	RemoveNthNodeFromEndOfList sol;
	ListNode *p_a = new ListNode(0);
	ListNode *p_b = new ListNode(1);
	ListNode *p_c = new ListNode(2);
	ListNode *p_d = new ListNode(3);
	ListNode *p_temp, *p_temp2;
/*
	p_a->next = p_b;
	p_b->next = p_c;
	p_c->next = p_d;
*/
	p_a = sol.removeNthFromEnd(p_a, 1);

	for (p_temp = p_a, p_temp2 = p_a; p_temp != nullptr;) {
		cout << p_temp->val << " ";
		p_temp2 = p_temp->next;
		delete p_temp;
		p_temp = p_temp2;
	}
	cout << endl;
	return 0;
}