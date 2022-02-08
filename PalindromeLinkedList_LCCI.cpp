#include "PalindromeLinkedList_LCCI.h"

bool PalindromeLinkedList_LCCI::isPalindrome(ListNode* head){
	if (head == NULL || head->next == NULL)
		return true;
	ListNode* p_slow = head, * p_fast = head;
	size_t size = 0;
	for (; p_fast != NULL;) {
		++size;
		p_fast = p_fast->next;
		if (size % 2 == 0)
			p_slow = p_slow->next;
	}
	p_fast = this->reverseList(p_slow);
	for (size_t i = 0; i < size/2; ++i) {
		if (head->val != p_fast->val)
			return false;
		head = head->next;
		p_fast = p_fast->next;
	}
	return true;
}

ListNode* PalindromeLinkedList_LCCI::reverseList(ListNode* head){
	ListNode* p_cur = NULL;
	if (head == NULL || head->next == NULL)
		return head;
	else if (head->next->next == NULL){	
		p_cur = head->next;
		head->next = NULL;
		p_cur->next = head;
		return p_cur;
	}
	else {
		for (ListNode* p_fore = head, *p_cur = p_fore->next, *p_next = p_cur->next;;) {
			if (p_fore == head)
				p_fore->next = NULL;
			p_cur->next = p_fore;
			p_fore = p_cur;
			p_cur = p_next;
			if (p_cur == NULL) {
				head = p_fore;
				break;
			}
			p_next = p_cur->next;
		}
	}
	return head;
}
