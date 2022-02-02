#pragma once
#include <cstddef>
/**
 * Definition for singly-linked list.
 */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class SumListsLCCI{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

