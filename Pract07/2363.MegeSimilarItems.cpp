#include <iostream>
#include <vector>
#include<map>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

std::vector<std::vector<int>> mergeSimilarItems(std::vector<std::vector<int>>& items1, std::vector<std::vector<int>>& items2) {

	std::map<int, int> weightM;

	for (auto& item : items1) {
	
		int value = item[0];
		int weight = item[1];
		weightM[value] += weight;

	}

	for (auto& item : items2) {
	
		int value = item[0];
		int weight = item[1];
		weightM[value] += weight;
	
	}


	std::vector<std::vector<int>> toReturn;

	for (auto& el : weightM) {

		toReturn.push_back({ el.first, el.second });
	
	}

	return toReturn;

}

int main() {

	std::vector<std::vector<int>>& items1 


}