#include <iostream>
#include "ListOfDepthLCCI.h"

int main() {
  Solution sol;
  std::vector<ListNode*> result;
  TreeNode* p_tn = new TreeNode(1);
  ListNode* p_ln = NULL;
  p_tn->left = new TreeNode(0);
  p_tn->right = new TreeNode(2);
  result = sol.listOfDepth(p_tn);
  for(size_t i = 0; i < result.size(); ++i){
    p_ln = result[i];
    while(p_ln != NULL){
      std::cout << p_ln->val << " ";
      p_ln = p_ln->next;
    }
    std::cout << std::endl;
  }
  return 0;
}
