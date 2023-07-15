#ifndef __AVERAGEOFLEVELSINBINARYTREE_H__
#define __AVERAGEOFLEVELSINBINARYTREE_H__
#include <vector>
/*
 * Definition for a binary tree node.
 */
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    std::vector<double> averageOfLevels(TreeNode* root);
};
#endif //__AVERAGEOFLEVELSINBINARYTREE_H__