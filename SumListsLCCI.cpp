#include "SumListsLCCI.h"

ListNode* SumListsLCCI::addTwoNumbers(ListNode* l1, ListNode* l2){
    if (l1->val == 0 && l2->val == 0 && l1->next == NULL && l2->next == NULL)
        return new ListNode(0);
    int d1 = 0, d2 = 0, quotient = 0, remainder = 0;
    ListNode* fl3 = new ListNode(0);
    ListNode* l3 = NULL;
    for (ListNode* c1 = l1, *c2 = l2, *c3 = fl3;;) {
        if (c1 != NULL) {
            d1 = c1->val;
            c1 = c1->next;
        }
        else
            d1 = 0;
        if (c2 != NULL) {
            d2 = c2->val;
            c2 = c2->next;
        }
        else
            d2 = 0;
        if (d1 + d2 + quotient != 0 || c1 != NULL || c2 != NULL) {
            c3->next = new ListNode(0);
            c3 = c3->next;
            remainder = (d1 + d2 + quotient) % 10;
            quotient = (d1 + d2 + quotient) / 10;
            c3->val = remainder;
        }
        else
            break;
    }
    l3 = fl3->next;
    delete fl3;
    return l3;
}
