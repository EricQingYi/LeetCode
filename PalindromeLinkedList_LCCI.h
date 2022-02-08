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

class PalindromeLinkedList_LCCI{
public:
    bool isPalindrome(ListNode* head);
    ListNode* reverseList(ListNode* head);
};

