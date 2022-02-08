#include <iostream>
#include "PalindromeLinkedList_LCCI.h"
using namespace std;

int main() {
	/*
	[53,3,-4,79,2,53]
	[53,3,-4,79,2]
	[13,3,-4,20,2]
	ListNode* a = new ListNode(13);
	ListNode* b = new ListNode(3);
	ListNode* c = new ListNode(-4);
	ListNode* d = new ListNode(20);
	ListNode* e = new ListNode(2);
	ListNode* f = new ListNode(3);
	*/
	PalindromeLinkedList_LCCI sol;
	ListNode* a = new ListNode(1);
	ListNode* b = new ListNode(1);
	ListNode* c = new ListNode(2);
	ListNode* d = new ListNode(1);
	ListNode* e = new ListNode(1);
	ListNode* f = new ListNode(1);
	a->next = b;
	cout << sol.isPalindrome(a) << endl;
	/*
	for (ListNode* p_sL = sol.reverseList(d); p_sL != nullptr; p_sL = p_sL->next) {
		cout << p_sL->val << " ";
	}
	cout << endl;
	*/
	return 0;
}