#include "MiddleOfTheLinkedList.h"

ListNode* MiddleOfTheLinkedList::middleNode(ListNode* head){
    ListNode* p_ite = head;
    size_t count = 0;
    size_t shift;
    while (p_ite->next != nullptr) {
        count++;
        p_ite = p_ite->next;
    }
    shift = count % 2 == 0 ?  count / 2 : count / 2 + 1;
    while (shift > 0) {
        --shift;
        head = head->next;
    }
    return head;
}
