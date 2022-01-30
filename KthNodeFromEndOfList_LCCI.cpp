#include "KthNodeFromEndOfList_LCCI.h"

int KthNodeFromEndOfList_LCCI::kthToLast(ListNode* head, int k){
    ListNode* p_slow = head, * p_fast = head;
    int value = 0;
    for (;;--k, p_fast = p_fast->next) {
        if (k <= 0) {
            p_slow = p_slow->next;
        }
        if (p_fast->next == NULL) {
            value = p_slow->val;
            break;
        }
    }
    return value;
}
