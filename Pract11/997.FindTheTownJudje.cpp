#include <iostream>
#include <vector>
#include <unordered_map>

int findJudje(int n, std::vector<std::vector<int>>& trust) {

	std::vector<int> trustVect(n + 1, 0);

	for (const auto& t : trust) {

		int a = t[0];
		int b = t[1];

		trustVect[a]--;
		trustVect[b]++;

	}

	for (int i = 1; i <= n; i++) {
	
		if (trustVect[i] == n - 1)
			return i;
	
	}

	return -1;

}