#ifndef BST_SEQUENCESLCCI_HPP
#define BST_SEQUENCESLCCI_HPP

#include <cstddef>
#include <vector>
using std::vector;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  vector<vector<int>> BSTSequences(TreeNode* root);
private:
  void Traversal();
  vector<vector<int> > results;
  vector<int> sequence;// One result
  vector<TreeNode*> edgeNodes;// Edge Nodes that will be traversed.
};

#endif
