#include <iostream>
#include <vector>

void dfs(std::vector<std::vector<int>>& mtx, std::vector<bool>& seen, int src) {

	seen[src] = true;

	for (int i = 0; i < mtx[src].size(); i++) {

		if (i != src && !seen[i] && mtx[src][i] == 1)
			dfs(mtx, seen, i);

	}

}

int findCircleNum(std::vector<std::vector<int>>& isConnected) {

	int count = 0;

	std::vector<bool> seen(isConnected.size(), false);

	for (int i = 0; i < isConnected.size(); i++) {
	
		if (!seen[i]) {
		
			dfs(isConnected, seen, i);
			count++;
		
		}
	
	}

	return count;

}