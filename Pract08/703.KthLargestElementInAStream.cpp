#include <iostream>
#include <vector>
#include <queue>

class KthLargest {

	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	int k;

public:

	KthLargest(int k, std::vector<int>& nums) : k(k), pq(nums.begin(), nums.end()) {

		while (pq.size() > k)
			pq.pop();

	}

	int add(int val) {
	
		if (pq.size() < k)
			pq.push(val);
		else if (val >= pq.top()) {
		
			pq.pop();
			pq.push(val);
		
		}

		return pq.top();

	}

};