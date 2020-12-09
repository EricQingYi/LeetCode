#include "IntersectionOfTwoLinkedLists.h"

ListNode* IntersectionOfTwoLinkedLists::getIntersectionNode(ListNode* headA, ListNode* headB){
	if (headA == nullptr || headB == nullptr)
		return nullptr;
	ListNode* p_intersection = nullptr;
	ListNode* p_A = headA;
	ListNode* p_B = headB;
	int LastValueOfA = 0;
	int LastValueOfB = 0;
	bool SetLastValueOfA = false;
	bool SetLastValueOfB = false;
	while (true){
		if (p_A == p_B) {
			p_intersection = p_A;
			break;
		}
		if ((SetLastValueOfA && SetLastValueOfB) &&
			(LastValueOfA != LastValueOfB))
			break;// Tails of A and B are different, so without intersection.
		if (p_A->next == nullptr) {
			LastValueOfA = p_A->val;
			SetLastValueOfA = true;
			p_A = headB;
		}
		else
			p_A = p_A->next;
		if (p_B->next == nullptr) {
			LastValueOfB = p_B->val;
			SetLastValueOfB = true;
			p_B = headA;
		}
		else
			p_B = p_B->next;
	}
	return p_intersection;
}
