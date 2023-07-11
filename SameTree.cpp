//100. Same Tree
#include "SameTree.h"

bool Solution::isSameTree(TreeNode* p, TreeNode* q){
    if(p == nullptr && q == nullptr)
        return true;
    else if((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
        return false;
    else{ // p != nullptr && q != nullptr
        if(p->val != q->val)
            return false;
        else{
            if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
                return true;
            else
                return false;
        }
    }
}
