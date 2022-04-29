#ifndef LEGAL_BINARY_SEARCH_TREE_LCCI_CPP
#define LEGAL_BINARY_SEARCH_TREE_LCCI_CPP
#include <cstddef>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  bool isValidBST(TreeNode* root);
private:
  int subTreeMinVal;
  int subTreeMaxVal;
};

#endif // LEGAL_BINARY_SEARCH_TREE_LCCI_CPP
