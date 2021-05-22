#include "IncreasingOrderSearchTree.h"

TreeNode* Solution::increasingBST(TreeNode* root){
    TreeNode* p_pre = nullptr;
    bool getNewRoot = false;
    TreeNode* p_nroot = nullptr;
    LDR(root, &p_pre, &getNewRoot, &p_nroot);
    return p_nroot;
}

 void Solution::LDR(TreeNode* p_root, TreeNode** pp_pre, bool* p_getNewRoot, TreeNode** pp_nroot){
    if (p_root == nullptr) {
        return;
    }
    LDR(p_root->left, pp_pre, p_getNewRoot, pp_nroot);
    if(!*p_getNewRoot) {
        *pp_nroot = p_root;
        *p_getNewRoot = true;
    }
    if (*pp_pre != nullptr)
        (*pp_pre)->right = p_root;
    p_root->left = nullptr;
    *pp_pre = p_root;
    LDR(p_root->right, pp_pre, p_getNewRoot, pp_nroot);
    return;
}
