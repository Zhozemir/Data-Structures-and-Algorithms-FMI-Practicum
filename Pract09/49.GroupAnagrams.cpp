#include <iostream>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {

	std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

	for (std::string& str : strs) {
	
		std::string sortedStr = str;
		std:: sort(sortedStr.begin(), sortedStr.end());

		anagramGroups[sortedStr].push_back(str);
	
	}

	std::vector<std::vector<std::string>> result;

	for (auto& el : anagramGroups)
		result.push_back(el.second);

	return result;

}
