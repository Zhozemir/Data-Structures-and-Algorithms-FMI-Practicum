#include <iostream>
#include <stack>
#include <vector>

int minOperations(std::vector<std::string>& logs) {

	std::stack<std::string> st;

	for (auto& operation : logs) {

		if (operation == "../") {

			if (!st.empty())
				st.pop();

		}
		else if (operation == "./")
			continue;
		else 
			st.push(operation);

	}

	return st.size();

}