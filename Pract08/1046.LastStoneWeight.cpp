#include<iostream>
#include <vector>
#include <queue>

int lastStoneWeight(std::vector<int>& stones) {

	std::priority_queue<int> pq (stones.begin(), stones.end());

	while(pq.size() > 1) {
	
		int y = pq.top();
		pq.pop();
		int x = pq.top();

		if (x == y)
			pq.pop();
		else {
		
			pq.pop();
			pq.push(y - x);
		
		}

	}


	if (pq.size() > 0)
		return pq.top();
	else
		return 0;

}