#include "SuccessorLCCI.hpp"

TreeNode* Solution::inorderSuccessor(TreeNode* root, TreeNode* p){
  inorder(root, p);
  if(pVisited == false)
    return NULL;
  return successor;
}

void Solution::inorder(TreeNode* root, TreeNode* p){
  if(root == NULL)
    return;
  inorderSuccessor(root->left, p);
  if(pVisited){
    if(successor == NULL)
      successor = root;
    return;
  }
  if(root->val == p->val)
    pVisited = true;
  inorderSuccessor(root->right, p);
}
