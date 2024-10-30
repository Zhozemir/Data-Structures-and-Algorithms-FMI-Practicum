#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}

};

ListNode* swapNodes(ListNode* head, int k) {

	ListNode* first = head;
	ListNode* second = head;
	ListNode* kthFromBeg = nullptr;

	for (int i = 1; i < k; i++)
		first = first->next;

	kthFromBeg = first;

	first = first->next;

	while (first) {
	
		first = first->next;
		second = second->next;
	
	}

	std::swap(kthFromBeg->val, second->val);

	return head;
}

