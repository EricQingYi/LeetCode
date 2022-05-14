#include "FirstCommonAncestorLCCI.hpp"

TreeNode* Solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
  TreeNode* p_Ancestor = NULL; 
  postOrder(root, p, q, &p_Ancestor);
  return p_Ancestor;
}


bool Solution::postOrder(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode** pp_Ancestor)
{
  bool lstFounded = 0, rstFounded = 0;
  if(root == NULL)
    return false;
  if(*pp_Ancestor != NULL)
    return true;
  lstFounded = postOrder(root->left, p, q, pp_Ancestor);
  rstFounded = postOrder(root->right, p, q, pp_Ancestor);
  if(*pp_Ancestor != NULL)
    return true;
  if(! lstFounded && ! rstFounded){
    if(root == p || root == q)
      return true;
    return false;
  }
  else if(lstFounded && rstFounded){
    *pp_Ancestor = root;
    return true;
  }
  else /*if (lstFounded || rstFounded) */{
    if(root == p || root == q){
      *pp_Ancestor = root;
      return true;
    }
    else
      return true;
  }
}
