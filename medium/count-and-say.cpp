// Leetcode #38: Count and Say - Medium

#include <string>

std::string rle(std::string s) {
    std::string result = "";
    int current_count = 0;
    char current_char;
    
    for (int i = 0; i < s.size(); ++i) {
        const char ch = s[i];

        if (i == 0) {
            current_char = ch;
            current_count = 1;
            continue;
        }

        if (ch == current_char) {
            ++current_count;
            continue;
        }

        result += std::to_string(current_count);
        result += current_char;

        current_count = 1;
        current_char = ch;
    }

    // remaining count
    result += std::to_string(current_count);
    result += current_char;

    return result;
}

class Solution {
public:
    std::string countAndSay(int n) {
        if (n == 1) { return "1"; }

        return rle(countAndSay(n - 1));
    }
};