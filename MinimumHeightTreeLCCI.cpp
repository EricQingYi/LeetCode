#include "MinimumHeightTreeLCCI.h"
//#include <iostream>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::sortedArrayToBST(std::vector<int>& nums){
  return fun(nums, 0, nums.size()-1);
}

TreeNode* Solution::fun(std::vector<int>& nums, int sIndex, int eIndex){
  if(sIndex > eIndex)
    return NULL;
  TreeNode* p_node = new TreeNode(0);
  size_t mIndex = sIndex + (eIndex - sIndex)/2;
  p_node->val = nums[mIndex];
  p_node->left = fun(nums, sIndex, mIndex-1);
  
  //  std::cout << p_node->val << std::endl;

  p_node->right = fun(nums, mIndex+1, eIndex);
  return p_node;
}
