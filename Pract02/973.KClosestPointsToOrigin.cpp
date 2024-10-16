#include <iostream>
#include <vector>
#include <algorithm>

int squareDistance(std::vector<int>& point) {

	return point[0] * point[0] + point[1] * point[1];

}

bool comparePoints(std::vector<int>& v1, std::vector<int>& v2) {

	return squareDistance(v1) < squareDistance(v2);

}


std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int k) {

	std::sort(points.begin(), points.end(), comparePoints);

	std::vector<std::vector<int>> closestsPoints(points.begin(), points.begin() + k);

	return closestsPoints;

}
