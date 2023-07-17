#include "MinimumAbsoluteDifferenceInBST.h"
#include <algorithm>
#include <limits.h>
int Solution::getMinimumDifference(TreeNode* root){
    int res = INT_MAX;
    TreeNode* tempNode = nullptr;
    inOrederTrv(root, &tempNode, &res);
    return res;
}

void Solution::inOrederTrv(TreeNode* root, TreeNode** p_tempNode, int* res){
    if(root == nullptr)
        return;
    inOrederTrv(root->left, p_tempNode, res);
    if(*p_tempNode == nullptr)
        *p_tempNode = root;
    else{
        *res = std::min(*res, std::abs(root->val - (*p_tempNode)->val));    
        *p_tempNode = root;
    }
    inOrederTrv(root->right, p_tempNode, res);
}