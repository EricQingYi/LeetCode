#include <algorithm> //std::max()
#include "CheckBalanceLCCI.h"

bool Solution::isBalanced(TreeNode* root) {
  size_t* p_height = new size_t;
  bool result;
  result = sol(root, p_height);
  delete p_height;
  return result;
}

bool Solution::sol(TreeNode* root, size_t* p_height){
  if(root == NULL){
    *p_height = 0;
    return true;
  }
  size_t l_subHeight = 0;
  size_t r_subHeight = 0;
  if(sol(root->left, p_height) == false)
    return false;
  l_subHeight = *p_height;
  if(sol(root->right, p_height) == false)
    return false;
  r_subHeight = *p_height;
  if(std::max(l_subHeight, r_subHeight) - std::min(l_subHeight, r_subHeight) > 1)
    return false;
  *p_height = std::max(l_subHeight, r_subHeight) + 1;
  return true;
}
