#ifndef CHECKBALANCELCCI_H
#define CHECKBALANCELCCI_H
#include <cstddef>

//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  bool isBalanced(TreeNode* root);
 private:
  bool sol(TreeNode* root, size_t* p_height);
}; 

#endif //CHECKBALANCELCCI_H
