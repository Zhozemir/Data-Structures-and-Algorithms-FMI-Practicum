
// ????? ? ????? ?? ???? ????? ? ????????? [-100, 100]. ?????????? ?? ? ??????? ????????.

#include <iostream>
#include <vector>

constexpr int numsCount = 201;
constexpr int indexOffset = 100;

std::vector<int> countingSort(std::vector<int>& numbers){

	std::vector<int> count(numsCount, 0);

	for (int i = 0; i < numbers.size(); i++)
		count[numbers[i] + indexOffset]++;

	for (int i = 1; i < numsCount; i++)
		count[i] += count[i - 1];
	

	std::vector<int> sortedNumbers(numbers.size(), 0);

	for (int i = numbers.size() - 1; i >= 0; i--) {
	
		int sortedIndex = --count[numbers[i] + indexOffset];
		sortedNumbers[sortedIndex] = numbers[i];
	
	}

	return sortedNumbers;
	
}

int main() {

	std::vector<int> v = { 55, -19, 27, 0, -100, 100, -35, 11 };

	std::vector<int> v1 = countingSort(v);

	for (auto& num : v1)
		std::cout << num << " ";
	

}