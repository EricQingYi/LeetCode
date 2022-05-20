#include "BST_SequencesLCCI.hpp"

vector<vector<int>> Solution::BSTSequences(TreeNode *root)
{
  if(root == NULL)
    return {{}};
  edgeNodes.push_back(root);
  Traversal();
  return results;
}

void Solution::Traversal()
{
  if(edgeNodes.empty()){
    results.push_back(sequence);
    return;
  }
  vector<TreeNode*> bak_edgeNodes = edgeNodes;
  vector<int> bak_sequence = sequence;
  for(size_t i = 0; i != edgeNodes.size(); ++i){
    sequence.push_back(edgeNodes[i] -> val );
    if(edgeNodes[i] -> left != NULL)
      edgeNodes.push_back(edgeNodes[i] -> left);
    if(edgeNodes[i] -> right != NULL)
      edgeNodes.push_back(edgeNodes[i]->right);
    edgeNodes.erase(edgeNodes.begin() + i);
    Traversal();
    edgeNodes = bak_edgeNodes;
    sequence = bak_sequence;
  }
}
