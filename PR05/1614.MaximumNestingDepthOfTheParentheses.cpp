#include <iostream>
#include <stack>;

int maxDepth(const std::string& s) {

    std::stack<char> stk;
    int maxDepth = 0;

    for (char ch : s) {

        if (ch == '(') {

            stk.push(ch);
            maxDepth = std::max(maxDepth, (int)stk.size());
        }
        else if (ch == ')') {

            if (!stk.empty())
                stk.pop();

        }
    }

    return maxDepth;
}



