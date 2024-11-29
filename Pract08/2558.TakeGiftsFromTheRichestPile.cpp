#include <iostream>
#include <queue>

long long pickGifts(std::vector<int>& gifts, int k) {
	
	std::priority_queue<int> pq(gifts.begin(), gifts.end());

	while (k != 0) {
	
		int current = pq.top();
		pq.pop();
		pq.push(sqrt(current));
	
		k--;

	}

	long long result = 0;

	while (!pq.empty()) {
	
		result += pq.top();
		pq.pop();
	
	}

	return result;

}