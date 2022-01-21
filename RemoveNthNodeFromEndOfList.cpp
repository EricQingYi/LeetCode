#include "RemoveNthNodeFromEndOfList.h"

ListNode* RemoveNthNodeFromEndOfList::removeNthFromEnd(ListNode* head, int n){
    ListNode* p_fast = head, *p_slow = head, *temp = nullptr;
    size_t distance = 0;
    for (;; p_fast = p_fast->next, ++distance) {
        if (distance > n+1)
            p_slow = p_slow->next;
        if (p_fast == nullptr)
            break;
    }
    if (distance != n) {
        temp = p_slow->next->next;
        delete p_slow->next;
        p_slow->next = temp;
    }
    else {
        temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}
