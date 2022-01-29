#include "RemoveDuplicateNodeLCCI.h"
#include <algorithm>
using namespace std;

ListNode* RemoveDuplicateNodeLCCI::removeDuplicateNodes(ListNode* head){
    if (head == nullptr || head->next == nullptr)
        return head;
    size_t dSize = 20000;
    bool* dic = new bool[dSize];
    fill_n(dic, dSize, false);
    dic[head->val] = true;
    for (ListNode* fcur = head, *cur = nullptr; fcur->next != nullptr; ) {
        cur = fcur->next;
        if (dic[cur->val]) {
            fcur->next = cur->next;
            delete cur;
        }
        else {
            dic[cur->val] = true;
            fcur = cur;
        }
    }
    delete[] dic;
    return head;
}
/*
ListNode* RemoveDuplicateNodeLCCI::removeDuplicateNodes(ListNode* head){
    head = this->sortList(head);
    head = this->removeDuplicatesFromSortedList(head);
    return head;
}
*/
ListNode* RemoveDuplicateNodeLCCI::removeDuplicatesFromSortedList(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode* p_cur = head;
    ListNode* p_next = nullptr;
    while(true){
        if (p_cur->val == p_cur->next->val) {
            p_next = p_cur->next;
            p_cur->next = p_cur->next->next;
            delete p_next;
        }
        else {
            p_cur = p_cur->next;
        }
        if (p_cur->next == nullptr)
            break;
    }
    return head;
}
ListNode* RemoveDuplicateNodeLCCI::sortList(ListNode* head){
    if (head == nullptr)
        return head;
    ListNode* p_dumm = new ListNode(-1);
    p_dumm->next = head;
    ListNode* p_sfCur = p_dumm;
    ListNode* p_cur = head->next;
    head->next = nullptr;
    for (ListNode* p_next = nullptr; p_cur != nullptr;) {
        while(true){
            if (p_cur->val <= p_sfCur->next->val) {
                p_next = p_cur->next;
                p_cur->next = p_sfCur->next;
                p_sfCur->next = p_cur;
                p_sfCur = p_dumm;
                p_cur = p_next;
                break;
            }
            if (p_sfCur->next->next == nullptr) {
                p_next = p_cur->next;
                p_cur->next = nullptr;
                p_sfCur->next->next = p_cur;
                p_sfCur = p_dumm;
                p_cur = p_next;
                break;
            }
            else
                p_sfCur = p_sfCur->next;
        }
    }
    head = p_dumm->next;
    delete p_dumm;
    return head;
}
