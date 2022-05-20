#include <iostream>
#include "BST_SequencesLCCI.hpp"

int main() {
  Solution sol;
  // TreeNode* p_tn = new TreeNode(3);
  // p_tn->left = new TreeNode(9);
  // p_tn->right = new TreeNode(20);
  // p_tn->right->left = new TreeNode(15);
  // p_tn->right->right = new TreeNode(7);

  TreeNode* p_tn = new TreeNode(5);
  p_tn->left = new TreeNode(2);
  p_tn->right = new TreeNode(7);
  p_tn->right->left = new TreeNode(6);
  p_tn->right->right = new TreeNode(8);
  vector<vector<int> > results = sol.BSTSequences(p_tn);
  for(auto i = results.begin(); i != results.end(); ++i){
    for(auto j = i->begin(); j != i->end(); ++j){
      std::cout << *j << ' ';
    }
    std::cout << std::endl;
  }
  return 0;
}
