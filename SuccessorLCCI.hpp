#ifndef SUCCESSORLCCI_HPP
#define SUCCESSORLCCI_HPP
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
  Solution():pVisited(false), successor(NULL){}
  TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p);
private:
  void inorder(TreeNode *root, TreeNode* p);
  bool pVisited;
  TreeNode* successor;
};
#endif // SUCCESSORLCCI_HPP
