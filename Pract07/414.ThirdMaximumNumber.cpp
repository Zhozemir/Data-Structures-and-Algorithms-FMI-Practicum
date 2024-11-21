#include <iostream>
#include <vector>
#include <set>

int thirdMax(std::vector<int>& nums) {

	std::set<int> set;

	for (auto& num : nums) {
	
		set.insert(num);

		if (set.size() > 3)
			set.erase(set.begin());
	
	}

	return set.size() == 3 ? *(set.begin()) : *(set.end());

}