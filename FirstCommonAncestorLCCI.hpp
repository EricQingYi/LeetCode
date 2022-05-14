#ifndef FIRSTCOMMONANCESTOR_HPP
#define FIRSTCOMMONANCESTOR_HPP
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
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
private:
  bool postOrder(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode** result);
};

#endif
