// Leetcode #383: Ransom Note - Easy

#include <unordered_map>
#include <string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> ransom_map;
        std::unordered_map<char, int> magazine_map;

        for (const char ch : magazine) { magazine_map[ch] += 1; }
        for (const char ch : ransomNote) { ransom_map[ch] += 1; }

        for (const auto char_pair : ransom_map) {
            const char ch = char_pair.first;
            const char count = char_pair.second;

            if (count > magazine_map[ch]) {
                return false;
            }
        }

        return true;
    }
};