#include "LinkedListCycleLCCI.h"
#include <unordered_set>
using namespace std;

/*
ListNode* LinkedListCycleLCCI::detectCycle(ListNode* head) {
    unordered_set<ListNode*> set;
    for (; head != NULL;) {
        if (set.find(head) != set.end()) {
            return head;
        }
        else {
            set.insert(head);
            head = head->next;
        }
    }
    return NULL;
}
*/
ListNode* LinkedListCycleLCCI::detectCycle(ListNode* head) {
    ListNode* slow = head, * fast = head;
    bool start = true;
    for (;;) {
        if (slow == NULL || fast == NULL)
            return NULL;
        if (slow == fast && start != true) {
            break;
        }
        else {
            start = false;
            slow = slow->next;
            if (fast->next != NULL)
                fast = fast->next->next;
            else
                return NULL;
		}
    }
    for (slow = head; slow != fast; slow = slow->next, fast = fast->next) {}
    return slow;
}
