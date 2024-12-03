#include <iostream>
#include <queue>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode* mergeKLists(std::vector<ListNode*>& lists) {

	std::priority_queue<int, std::vector<int>, std::greater<>> pq;

	for (auto& list : lists){
	
		while (list) {
		
			pq.push(list->val);
			list = list->next;
		
		}
	
	}

	ListNode* toReturn = new ListNode(0);
	ListNode* temp = toReturn;

	while (!pq.empty()) {
	
		temp->next = new ListNode(pq.top());
		pq.pop();
		temp = temp->next;

	}

	return toReturn->next;

}