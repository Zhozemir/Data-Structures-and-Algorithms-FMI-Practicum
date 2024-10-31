#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {

	ListNode* prev = nullptr;
	ListNode* current = head;

	while (current != nullptr) {
	
		ListNode* nextTemp = current->next;
		current->next = prev;
		prev = current;
		current = nextTemp;
	
	}

	return prev;

}

ListNode* doubleIt(ListNode* head) {

	head = reverseList(head);

	ListNode* current = head;
	int carry = 0;

	while (current) {
	
		int doubledValue = current->val * 2 + carry;
		current->val = doubledValue % 10;
		carry = doubledValue / 10;

		if (current->next == nullptr) {
		
			if (carry > 0)
				current->next = new ListNode(carry);

			break;
		
		}

		current = current->next;
	
	}

	return reverseList(head);

}