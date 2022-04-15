#ifndef MINIMUMHEIGHTTREELCCI_H
#define MINIMUMHEIGHTTREELCCI_H
#include <vector>

// Definition for a binary tree node.
struct TreeNode {
  int	 val;
  TreeNode	*left;
  TreeNode	*right;
TreeNode(int x) : val(x), left(NULL), right(NULL){}
};
 
class Solution {
public:
  TreeNode* sortedArrayToBST(std::vector<int>& nums);
  TreeNode* fun(std::vector<int>& nums, int sIndex, int eIndex);
};
#endif //MINIMUMHEIGHTTREELCCI_H
