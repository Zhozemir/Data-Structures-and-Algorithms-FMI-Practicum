#include <iostream>
#include <vector>
#include <algorithm>

int minProcessingTime(std::vector<int>& processorTime, std::vector<int>& tasks) {

    long long maximumCompletionTime = 0; 

    int taskIndex = 4 * processorTime.size() - 4; 
    
    sort(processorTime.begin(), processorTime.end());
    sort(tasks.begin(), tasks.end());

    for (int processorIndex = 0; processorIndex < processorTime.size(); processorIndex++) {
     
        long long int availableTime = processorTime[processorIndex];
      
        availableTime += std::max(tasks[taskIndex],
                         std::max(tasks[taskIndex + 1],
                         std::max(tasks[taskIndex + 2],
                         tasks[taskIndex + 3])));

     
        maximumCompletionTime = std::max(maximumCompletionTime, availableTime);

        taskIndex -= 4; 
    }

    return maximumCompletionTime;

}

int main() {

	std::vector<int> processorTime = { 8, 10 };
	std::vector<int> tasks = { 2, 2, 3, 1, 8, 7, 4, 5 };

	std::cout << minProcessingTime(processorTime, tasks);


}