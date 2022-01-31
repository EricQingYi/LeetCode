#pragma once
#include <cstddef>

/*
 * Definition for singly-linked list.
 */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class DeleteMiddleNodeLCCI{
public:
    void deleteNode(ListNode* node);
};

