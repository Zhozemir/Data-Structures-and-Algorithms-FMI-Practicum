#include <iostream>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* partition(ListNode* head, int x) {
  
      ListNode* lower = new ListNode();
      ListNode* others = new ListNode();

      ListNode* currentLower = lower;
      ListNode* currentOthers = others;

      ListNode* current = head;

      while (current) {

          if (current->val < x) {

              currentLower->next = new ListNode(current->val);
              currentLower = currentLower->next;

          }
          else {

              currentOthers->next = new ListNode(current->val);
              currentOthers = currentOthers->next;

          }

          current = current->next;

      }

      currentLower->next = others->next;

      ListNode* result = lower->next;

      delete lower;
      delete others;

      return result;

  }
 