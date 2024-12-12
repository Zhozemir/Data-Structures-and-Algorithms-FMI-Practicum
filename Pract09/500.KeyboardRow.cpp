#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::string> findWords(std::vector<std::string>& words) {

    std::unordered_set<char> row1 = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' };
    std::unordered_set<char> row2 = { 'a','s', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
    std::unordered_set<char> row3 = { 'z', 'x', 'c', 'v', 'b', 'n', 'm' };

    std::vector<std::string> result;

    for (auto& word : words) {

        char firstChar = tolower(word[0]);

        std::unordered_set<char>& currentRow =
            row1.count(firstChar) ? row1 :
            row2.count(firstChar) ? row2 :
            row3;

        bool isValid = true;

        for (char c : word) {

            if (!currentRow.count(tolower(c))) {

                isValid = false;
                break;

            }
        }

        if (isValid)
            result.push_back(word);

    }

    return result;

}