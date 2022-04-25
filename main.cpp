#include <iostream>
#include "CheckBalanceLCCI.h"

int main() {
  Solution sol;
  TreeNode* p_tn = new TreeNode(3);
  p_tn->left = new TreeNode(9);
  p_tn->right = new TreeNode(20);
  p_tn->right->left = new TreeNode(15);
  p_tn->right->right = new TreeNode(7);
  std::cout << sol.isBalanced(p_tn) << std::endl;
  return 0;
}
