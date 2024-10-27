
// Пренаредете масив от цели числа така, че всички прости числа да бъдат преди съставните числа.

#include <iostream>
#include <vector>

bool isPrime(int num) {

	if (num <= 1)
		return false; 

	if (num <= 3) 
		return true;    
	
	if (num % 2 == 0 || num % 3 == 0)
		return false;

	for (int i = 5; i * i <= num; i += 6) {

		if (num % i == 0 || num % (i + 2) == 0) 
			return false;

	}

	return true; 

}

void partition(std::vector<int>& nums) {

	int left = 0;
	int right = nums.size() - 1;

	while (true) {

		while (left < right && isPrime(nums[left]))
			left++;

		while (right >= 0 && !isPrime(nums[right]))
			right--;

		if (left < right) {

			std::swap(nums[left], nums[right]);
			left++;
			right--;

		}
		else
			break;
		
	}
}

int main() {

	std::vector<int> v = { 10, 3, 5, 9, 2, 8 };
	partition(v);

	for (auto& num : v) {
		
		std::cout << num << " ";
	
	}

}
