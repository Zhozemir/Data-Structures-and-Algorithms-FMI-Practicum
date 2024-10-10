#include <iostream>
#include <vector>
#include <algorithm>


double minimumAverage(std::vector<int>& nums) {

	int first = 0;
	int last = nums.size() - 1;
	double min = __DBL_MAX__;
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {

		double currenMin = (nums[first] + nums[last]) / 2.0;

		if (currenMin < min) {

			min = currenMin;

		}

		first++;
		last--;


	}

	return min;

}

int main() {

	std::vector<int> nums = { 7,8,3,4,15,13,4,1 };

	std::cout << minimumAverage(nums);

}
