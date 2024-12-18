
// Даден е масив от интервали.Обединете всички интервали, които се припокриват(т.е.интервали, които имат общи стойности или се застъпват)

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> mergeIntervals(std::vector<std::vector<int>>& intervals) {

	std::sort(intervals.begin(), intervals.end());

	std::vector<std::vector<int>> merged;

	for (const auto& interval : intervals) {
	
		if (merged.empty() || merged.back()[1] < interval[0])
			merged.push_back(interval);
		else
			merged.back()[1] = std::max(merged.back()[1], interval[1]);
	
	}

	return merged;

}

int main() {

	std::vector<std::vector<int>> intervals = { {1, 3}, {2, 4}, {5, 7}, {6, 8,} };

	std::vector<std::vector<int>> res = mergeIntervals(intervals);

	for (auto& interval : res)
		std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
	
}
