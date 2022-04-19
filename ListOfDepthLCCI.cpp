#include "ListOfDepthLCCI.h"

std::vector<ListNode*> Solution::listOfDepth(TreeNode* tree){
  int curDep = 0;//current depth.
  int nu_CurDep = 0;//number of nodes of current depth.
  int nu_NexDep = 0;//number of nodes of next depth.
  ListNode* p_endList = NULL;
  if(tree == NULL)
    return result;
  qu.push(tree);
  nu_CurDep = 1;
  while(!qu.empty()){
    for(int i = 0; i < nu_CurDep; ++i){

      if(i == 0){
	result.push_back(NULL);
	result[curDep] = new ListNode(qu.front()->val);
	p_endList = result[curDep];
      }
      else{
	p_endList->next = new ListNode(qu.front()->val);
	p_endList = p_endList->next;
      }

      if(qu.front()->left != NULL){// Add next depth node.
	++nu_NexDep;
	qu.push(qu.front()->left);
      }
      if(qu.front()->right != NULL){// Add next depth node.
	++nu_NexDep;
	qu.push(qu.front()->right);
      }
      qu.pop();
    }
    ++curDep;
    nu_CurDep = nu_NexDep;
    nu_NexDep = 0;
  }
  return result;
}
