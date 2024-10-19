#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int minimumPushes(std::string word){

	int freq[26] = { 0 };

	for (char ch : word)
		freq[ch - 'a']++;

	std::vector<int> frequencies;

	for (int i = 0; i < 26; i++) {

		if (freq[i] > 0) 
			frequencies.push_back(freq[i]);

	}

	std::sort(frequencies.begin(), frequencies.end(), std::greater<>());

	int totalPresses = 0;
	int pressesPerLetter = 1;

	for (int i = 0; i < frequencies.size(); ++i) {
		
		if (i != 0 && i % 8 == 0)
			pressesPerLetter++;

		totalPresses += frequencies[i] * pressesPerLetter;
	}

	return totalPresses;

}

int main() {

	std::string word = "aabbccddeeffgghhiiiiii";

	std::cout << minimumPushes(word);

}