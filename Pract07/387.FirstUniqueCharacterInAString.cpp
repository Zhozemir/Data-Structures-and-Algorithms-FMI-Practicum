#include <iostream>
#include <string>
#include <map>

int firstUniqChar(std::string s) {

    std::map<char, int> freqMap;

    for (char ch : s)
        freqMap[ch]++;

    for (int i = 0; i < s.size(); i++) {

        if (freqMap[s[i]] == 1)
            return i;

    }

    return -1;

}

int main() {
    std::string s = "loveleetcode";
    std::cout << "The index of the first unique character is: " << firstUniqChar(s) << std::endl;

    return 0;
}
