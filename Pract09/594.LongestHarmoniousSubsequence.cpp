#include <iostream>
#include <vector>
#include <unordered_map>


int findLHS(std::vector<int>& nums) {

	std::unordered_map<int, int> freq;
	int maxLength = 0;

	for (int num : nums)
		freq[num]++;


	for (auto& pair : freq) {
	
		int key = pair.first;
		int value = pair.second;

		if (freq.find(key + 1) != freq.end())
			maxLength = std::max(maxLength, value + freq[key + 1]);
	
	}

	return maxLength;
			
}