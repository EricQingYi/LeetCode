#include <iostream>
#include "LegalBinarySearchTreeLCCI.hpp"
int main() {
  Solution sol;
  // TreeNode* p_tn = new TreeNode(3);
  // p_tn->left = new TreeNode(9);
  // p_tn->right = new TreeNode(20);
  // p_tn->right->left = new TreeNode(15);
  // p_tn->right->right = new TreeNode(7);

  TreeNode* p_tn = new TreeNode(2);
  p_tn->left = new TreeNode(1);
  p_tn->right = new TreeNode(4);
  p_tn->right->left = new TreeNode(3);
  p_tn->right->right = new TreeNode(5);
  std::cout << sol.isValidBST(p_tn) << std::endl;
  return 0;
}
