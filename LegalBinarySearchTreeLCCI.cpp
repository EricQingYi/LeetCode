#include "LegalBinarySearchTreeLCCI.hpp"

bool Solution::isValidBST(TreeNode* root){
  /*
  Idea:
  left tree max val < current node val < right tree min val
 */
  if(root == NULL)
    return true;
  int curTreeMinVal = 0;
  int curTreeMaxVal = 0;
  if(! isValidBST(root->left))
    return false;
  else{
    if(root->left != NULL)
      curTreeMinVal = subTreeMinVal;
    else
      curTreeMinVal = root->val;
  }
  if(root->left != NULL && subTreeMaxVal >= root->val)
    return false;
  if(! isValidBST(root->right))
    return false;
  else{
    if(root->right != NULL)
      curTreeMaxVal = subTreeMaxVal;
    else
      curTreeMaxVal = root->val;
  }
  if(root->right != NULL && root->val >= subTreeMinVal)
    return false;
  subTreeMinVal = curTreeMinVal;
  subTreeMaxVal = curTreeMaxVal;
  return true;
}
