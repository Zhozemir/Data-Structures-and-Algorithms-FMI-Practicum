#include <iostream>
#include <vector>

int countLessOrEqual(std::vector<std::vector<int>>& matrix, int mid) {

	int count = 0;
	int n = matrix.size();

	int row = n - 1;
	int col = 0;

	while (row >= 0 && col < n) {

		if (matrix[row][col] <= mid) {

			count += (row + 1);
			col++;

		}
		else
			row--;

	}

	return count;

}

int kthSmallest(std::vector<std::vector<int>>& matrix, int k) {

	int n = matrix.size();
	int begin = matrix[0][0];
	int end = matrix[n - 1][n - 1];

	while (begin < end) {

		int mid = begin + (end - begin) / 2;
		int count = countLessOrEqual(matrix, mid);

		if (count < k)
			begin = mid + 1;
		else
			end = mid;

	}

	return begin;

}

int main() {

	std::vector<std::vector<int>> matrix = { {1, 5, 9}, {10, 11, 13}, {12, 13, 15} };

	std::cout << kthSmallest(matrix, 8);

}


//#include <iostream>
//#include <vector>
//#include <set>
//
//int kthSmallest(std::vector<std::vector<int>>& matrix, int k) {
//
//	std::multiset<int> s;
//	
//
//	for (auto& row : matrix) {
//		
//		for (auto el : row) {
//		
//			s.insert(el);
//
//		}
//	
//	}
//
//	auto it = s.begin();
//	std::advance(it, k - 1);
//	
//	return *it;
//
//}
//
