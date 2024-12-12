#include <iostream>
#include <unordered_set>
 
bool buddyStrings(std::string s, std::string goal) {

    if (s.size() != goal.size()) 
        return false;

    if (s == goal) {

        std::unordered_set<char> charSet(s.begin(), s.end());
        return charSet.size() < s.size();

    }

    std::vector<int> mismatchedIndices;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != goal[i]) 
            mismatchedIndices.push_back(i);
      
    }

    if (mismatchedIndices.size() == 2) {

        int i = mismatchedIndices[0];
        int j = mismatchedIndices[1];

        return (s[i] == goal[j] && s[j] == goal[i]);

    }

    return false;
	
}

