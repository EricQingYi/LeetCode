/*897. Increasing Order Search Tree
Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only one right child.
https://leetcode-cn.com/problems/increasing-order-search-tree
*/

#pragma once
//Definition for a binary tree node.
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
    TreeNode* increasingBST(TreeNode*);
    void LDR(TreeNode*, TreeNode**, bool*, TreeNode**);
};

