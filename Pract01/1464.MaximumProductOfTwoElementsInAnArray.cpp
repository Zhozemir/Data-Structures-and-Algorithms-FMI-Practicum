#include <iostream>
#include <vector>
#include <algorithm>

int maxProduct(std::vector<int>& nums) {

    std::sort(nums.begin(), nums.end());

    return (nums[(nums.size() - 1)] - 1) * (nums[nums.size() - 2] - 1);
}

int main() {

    std::vector<int> nums = { 3, 4, 5, 2 };

    std::cout << maxProduct(nums);

}