#include "PartitionListLCCI.h"
#include <climits>

ListNode* PartitionListLCCI::partition(ListNode* head, int x){
    if (head == NULL || head->next == NULL)
        return head;
    ListNode* p_fFEL = new ListNode(INT_MIN); // p_fFEL: pointer to the node that before the first equal or larger than x node.
    p_fFEL->next = head;
    ListNode* p_fHead = p_fFEL; //p_fHead : pointer to the dumm node before head node.
    ListNode* p_fcur = p_fFEL; // p_fcur : pointer to the node before current node;
    ListNode* p_cur = p_fFEL->next; // p_cur: pointer to the current node;
    bool findFEL = false;
    for (;;) {
        if (!findFEL) {
            if (p_cur->val < x) {
                p_fFEL = p_cur;
                p_fcur = p_fFEL;
                p_cur = p_cur->next;
            }
            else {
                findFEL = true;
                p_fcur = p_cur;
                p_cur = p_cur->next;
            }
        }
        else {
            if (p_cur->val < x) {
                p_fcur->next = p_cur->next;
                p_cur->next = p_fFEL->next;
                p_fFEL->next = p_cur;
                p_cur = p_fcur->next;
            }
            else {
                p_fcur = p_cur;
                p_cur = p_cur->next;
            }
        }
        if (p_cur == NULL)
            break;
    }
    return p_fHead->next;
}
