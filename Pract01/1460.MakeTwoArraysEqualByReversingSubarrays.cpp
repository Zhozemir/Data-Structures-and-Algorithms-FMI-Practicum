#include <iostream>
#include <vector>
#include <algorithm>

bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {

	std::sort(target.begin(), target.end());
	std::sort(arr.begin(), arr.end());

	/*for (int i = 0; i < target.size(); i++) {

		if (target[i] == arr[i])
			continue;
		else
			return false;

	}

	return true;*/

	return target == arr;

}

int main() {

	std::vector<int> target = { 1, 2, 3, 4 };
	std::vector<int> arr = { 2, 4, 1, 3 };

	std::cout << canBeEqual(target, arr);

}