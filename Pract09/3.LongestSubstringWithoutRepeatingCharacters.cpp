#include <iostream>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s) {

	std::unordered_set<char> uniqueChars;

	int maxCount = 0;
	int left = 0;

	for (int right = 0; right < s.size(); right++) {

		char currChar = s[right];

		while (uniqueChars.find(currChar) != uniqueChars.end()) {
		
			uniqueChars.erase(s[left]);
			left++;
		
		}

		uniqueChars.insert(currChar);

		maxCount = std::max(maxCount, right - left + 1);

	}

	return maxCount;

}