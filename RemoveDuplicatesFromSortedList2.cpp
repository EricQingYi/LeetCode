#include "RemoveDuplicatesFromSortedList2.h"
ListNode* RemoveDuplicatesFromSortedList2::deleteDuplicates(ListNode* head) {
	if (head == nullptr || head->next == nullptr)
		return head;
	ListNode* p_headDistinctNode = nullptr;
	ListNode* p_tailDistinctNode = nullptr;
	ListNode* p_headDuplicateNode = head;
	bool isDup = false;
	ListNode* p_previous = head;
	ListNode* p_current = head->next;
	for (;;) {
		if (p_current->val == p_previous->val) {
			if (!isDup) {
				p_headDuplicateNode = p_previous;
				isDup = true;
			}
		}
		else {
			if (!isDup) {
				if(p_headDistinctNode == nullptr)
					p_headDistinctNode = p_previous;
				p_tailDistinctNode = p_previous;
			}
			else {// isDup == true
				p_previous->next = nullptr;
				//clear(p_headDuplicateNode);
				if (p_tailDistinctNode != nullptr) {
					p_tailDistinctNode->next = p_current;
				}
				isDup = false;
			}
		}
		p_previous = p_current;
		p_current = p_current->next;
		if (p_current == nullptr) {
			if (isDup) {
				//clear(p_headDuplicateNode);
				isDup = false;
				if(p_tailDistinctNode != nullptr)
					p_tailDistinctNode->next = nullptr;
			}
			else {
				if (p_headDistinctNode == nullptr)
					p_headDistinctNode = p_previous;
			}
			break;
		}
	}
	return p_headDistinctNode;
}

void RemoveDuplicatesFromSortedList2::clear(ListNode* head)
{
}
