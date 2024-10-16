#include <iostream>
#include <vector>
#include <algorithm>

int maxScore(std::vector<int>& nums) {

	std::sort(nums.begin(), nums.end(), std::greater<>());

	int counter = 0;
	long long curSum = 0;

	for (int i = 0; i < nums.size(); i++) {
	
		curSum += nums[i];

		if (curSum > 0)
			counter++;
		else
			break;

	}

	return counter;

}

int main() {

	std::vector<int> nums = { 2,-1,0,1,-3,3,-3 };
	std::cout << maxScore(nums);

}

