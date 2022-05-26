#include "CheckSubTreeLCCI.hpp"

bool Solution::checkSubTree(TreeNode *t1, TreeNode *t2)
{
  if(t1 == NULL){
    if(t2 == NULL)
      return true;
    else
      return false;
  }
  if(t2 == NULL)
    return true;
  if(t1->val == t2->val && identical(t1,t2))
    return true;
  if(checkSubTree(t1->left, t2) == true)
    return true;
  if(checkSubTree(t1->right, t2) == true)
    return true;
  return false;
}

bool Solution::identical(TreeNode* t1, TreeNode* t2)
{
  if(t1 == NULL && t2 == NULL)
    return true;
  if(t1 == NULL && t2 != NULL)
    return false;
  if(t1 != NULL && t2 == NULL)
    return false;
  if(t1->val == t2->val && \
     identical(t1->left, t2->left) && \
     identical(t1->right, t2->right))
    return true;
  return false;
}
