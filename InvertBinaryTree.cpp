#include "InvertBinaryTree.h"
TreeNode* Solution::invertTree(TreeNode* root){
    if(root == nullptr)
        return nullptr;
    TreeNode* tempNode;
    tempNode = invertTree(root->left);
    root->left = invertTree(root->right);
    root->right = tempNode;
    return root;
}