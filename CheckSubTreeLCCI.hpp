#ifndef CHECKSUBTREELCCI_HPP
#define CHECKSUBTREELCCI_HPP
#include <cstddef>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  bool checkSubTree(TreeNode* t1, TreeNode* t2);
private:
  bool identical(TreeNode* t1, TreeNode* t2);
};

#endif
