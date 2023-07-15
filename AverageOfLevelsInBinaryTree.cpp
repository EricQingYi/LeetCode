#include "AverageOfLevelsInBinaryTree.h"
#include <queue>
std::vector<double> Solution::averageOfLevels(TreeNode* root){
    std::vector<double> ret;
    typedef std::pair<std::size_t,TreeNode*> queElmType;
    std::queue<queElmType> que;
    std::size_t level = 0;
    double sumOflevel = 0;
    std::size_t numsNodeOfLevel = 0;
    que.push(std::make_pair(0,root));
    for(;;){
        if(que.empty()){
            ret.push_back(sumOflevel/numsNodeOfLevel);
            break;
        }
        queElmType cur = que.front();
        if(cur.first == level){
            sumOflevel += cur.second->val;
            numsNodeOfLevel++;
        }
        else{
            ret.push_back(sumOflevel/numsNodeOfLevel);
            level = cur.first;
            sumOflevel = cur.second->val;
            numsNodeOfLevel = 1;
        }
        if(cur.second->left != nullptr)
            que.push(std::make_pair(cur.first + 1, cur.second->left));
        if(cur.second->right != nullptr)
            que.push(std::make_pair(cur.first + 1, cur.second->right));
        que.pop();
    }
    return ret;
}