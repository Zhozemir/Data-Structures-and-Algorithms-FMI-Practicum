#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeLElements(ListNode* head, int val) {

    while (head != nullptr && head->val == val)
        head = head->next;

    ListNode* current = head;

    while (current != nullptr && current->next != nullptr) {
    
        if (current->next->val == val)
            current->next = current->next->next;

        else
            current = current->next;

    }

    return head;

}