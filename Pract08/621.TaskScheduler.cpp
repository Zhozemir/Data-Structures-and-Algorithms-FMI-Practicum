#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int leastInterval(std::vector<char>& tasks, int n) {

    std::map<char, int> taskCount;

    for (char task : tasks)
        taskCount[task]++;
    
    int maxFreq = 0;

    for (auto& el : taskCount)
        maxFreq = std::max(maxFreq, el.second);
    
    int maxFreqTasks = 0;

    for (auto& el : taskCount) {

        if (el.second == maxFreq)
            maxFreqTasks++;
        
    }

    int intervals = (maxFreq - 1) * (n + 1) + maxFreqTasks;

    return std::max((int)tasks.size(), intervals);
}
