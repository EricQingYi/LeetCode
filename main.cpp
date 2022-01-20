#include <iostream>
#include "MiddleOfTheLinkedList.h"
using namespace std;

int main() {
	MiddleOfTheLinkedList sol;
	ListNode *p_a = new ListNode(0);
	ListNode *p_b = new ListNode(1);
	ListNode *p_c = new ListNode(2);
	ListNode *p_d = new ListNode(3);
	ListNode *p_temp, *p_temp2;

	p_a->next = p_b;
	p_b->next = p_c;
	p_c->next = p_d;
	cout << sol.middleNode(p_a)->val << endl;

	for (p_temp = p_a, p_temp2 = p_a; p_temp != nullptr;) {
		p_temp2 = p_temp->next;
		delete p_temp;
		p_temp = p_temp2;
	}
	return 0;
}