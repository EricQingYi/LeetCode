#ifndef LISTOFDEPTHLCCI_H
#define LISTOFDEPTHLCCI_H
#include <queue>
#include <vector>

//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  std::vector<ListNode*> listOfDepth(TreeNode* tree);
 private:
  std::queue<TreeNode*> qu;
  std::vector<ListNode*> result;
};
#endif // LISTOFDEPTHLCCI_H
