#include <iostream>
#include <vector>
#include <algorithm>

long long largestPerimeter(std::vector<int>& nums) {

	if (nums.size() < 3)
		return -1;

	std::sort(nums.begin(), nums.end());

	int maxEl = nums[nums.size() - 1];

	long long result = 0;
	int i = nums.size() - 2;

	while (i >= 0) {
	
		result += nums[i];

		if (i == 0 && maxEl >= result) {
		
			nums.pop_back();

			if (nums.size() >= 3) {

				maxEl = nums[nums.size() - 1];
				result = 0;
				i = nums.size() - 2;
				continue;

			}
			else
				return -1;

		}
		
		i--;
	
	}
	
		return result + maxEl;

}


int main() {

	std::vector<int> nums = {1,12,1,2,5,50,3};
	std::cout << largestPerimeter(nums);

}