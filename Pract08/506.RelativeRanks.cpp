#include <iostream>
#include <queue>
#include <vector>
#include <string>

std::vector<std::string> findRelativeRanks(std::vector<int>& score) {

    int lenScore = score.size();

    std::vector<std::string> answer(lenScore);

    std::priority_queue<std::pair<int, int>> pq;

    for (int i = 0; i < lenScore; ++i)
        pq.push({ score[i], i });
 
    std::vector<std::string> rank = { "Gold Medal", "Silver Medal", "Bronze Medal" };

    int j = 1;

    while (!pq.empty()) {

        auto top = pq.top();
        pq.pop();

        int index = top.second;

        if (j  < 3)
            answer[index] = rank[j - 1];
        else
            answer[index] = std::to_string(j);
      
        j++;
    }

    return answer;
}


