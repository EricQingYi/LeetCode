//160. Intersection of Two Linked Lists
#pragma once

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 
class IntersectionOfTwoLinkedLists{
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
};

