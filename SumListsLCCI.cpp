#include "SumListsLCCI.h"

ListNode* SumListsLCCI::addTwoNumbers(ListNode* l1, ListNode* l2){
    int d1 = 0, d2 = 0, quotient = 0, remainder = 0;
    ListNode* fl3 = new ListNode(0);
    ListNode* l3 = NULL;
    for (ListNode* c1 = l1, *c2 = l2, *c3 = fl3;;) {
        if(quotient == 0 && c1 == NULL && c2 == NULL)
            break;
        else {
            if (c1 == NULL)
                d1 = 0;
            else
                d1 = c1->val, c1 = c1->next;
            if (c2 == NULL)
                d2 = 0;
            else
                d2 = c2->val, c2 = c2->next;
            c3->next = new ListNode(0);
            c3 = c3->next;
            remainder = (d1 + d2 + quotient) % 10;
            quotient = (d1 + d2 + quotient) / 10;
            c3->val = remainder;
        }
    }
    l3 = fl3->next;
    delete fl3;
    return l3;
}
