#include <iostream>
#include <vector>
#include <string>
#include "IntersectionOfTwoLinkedLists.h"
using namespace std;

int main() {
	IntersectionOfTwoLinkedLists sol;
	ListNode a1(1);
	ListNode a2(2);
	ListNode a3(3);
	ListNode b1(1);
	ListNode b2(2);
	a1.next = &a2;
	a2.next = &a3;
	b1.next = &b2;
	b2.next = &a2;
	cout << sol.getIntersectionNode(&a1, &b1)->val << endl;
	return 0;
}