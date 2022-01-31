#include "DeleteMiddleNodeLCCI.h"

void DeleteMiddleNodeLCCI::deleteNode(ListNode* node){
	while(true) {
		node->val = node->next->val;
		if (node->next->next == NULL) {
			delete node->next;
			node->next = NULL;
			break;
		}
		else
			node = node->next;
	}
}
