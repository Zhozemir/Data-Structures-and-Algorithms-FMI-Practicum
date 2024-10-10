#include <iostream>
#include <vector>
#include <algorithm>


std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {

	std::vector<std::pair<int, std::string>> people;

	int n = names.size();

	for (int i = 0; i < n; i++) 
		people.push_back({ heights[i], names[i] });

	std::sort(people.begin(), people.end(), std::greater<>());

	std::vector<std::string>sortedNames;

	for (auto& person : people)
		sortedNames.push_back(person.second);

	return sortedNames;

}

int main() {

	std::vector<std::string> names = { "Mary","John","Emma" };
	std::vector<int> heights = { 180, 165, 170 };

	std::vector<std::string> sortedNames = sortPeople(names, heights);

	for (auto& person : sortedNames)
		std::cout << person << " ";

}