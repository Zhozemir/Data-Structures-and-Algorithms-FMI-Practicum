#include <iostream>
#include <stack>

class MinStack {

	std::stack<int> st;
	std::stack<int> minSt;

public:

	MinStack() {
	
		minSt.push(INT_MAX);
	
	}

	void push(int val) {
		
		st.push(val);

		minSt.push(std::min(val, minSt.top()));
	
	}

	void pop() {
	
		st.pop();
		minSt.pop();
	
	}

	int top() {
	
		return st.top();
	
	}

	int getMin() {
	
		return minSt.top();
	
	}

};