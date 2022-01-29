#pragma once
/*
 Definition for singly-linked list.
 */
 struct ListNode {
	 int val;
	 ListNode *next;
	 ListNode(int x) : val(x), next(nullptr) {}
 };
 
class RemoveDuplicateNodeLCCI{
public:
	ListNode* removeDuplicateNodes(ListNode* head);
	ListNode* removeDuplicatesFromSortedList(ListNode* head);
	ListNode* sortList(ListNode* head);
};

