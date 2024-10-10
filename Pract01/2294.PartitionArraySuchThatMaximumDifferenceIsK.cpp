#include <iostream>
#include <vector>
#include <algorithm>

int partitionArray(std::vector<int>& nums, int k) {

	std::sort(nums.begin(), nums.end());

	int subsequences = 1;
	int minEl = nums[0];

	for (int i = 1; i < nums.size(); i++) {
	
		if (nums[i] - minEl > k) {
		
			subsequences++;
			minEl = nums[i];
		
		}
	
	}

	return subsequences;

}

int main() {

	std::vector<int> nums = { 2, 2, 4, 5 };
	int k = 0;

	int result = partitionArray(nums, k);

	std::cout << result;

}