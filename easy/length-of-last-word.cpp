// Leetcode #58: Length of Last Word

#include <string>

class Solution {
 public:
  int lengthOfLastWord(std::string s) {
    int index = s.length() - 1;
    int valid_chars = 0;

    if (s[index] == ' ') {
      while (s[index] == ' ') {
        --index;
      }
    }

    while (index >= 0 && s[index] != ' ') {
      --index;
      ++valid_chars;
    }

      return valid_chars;
  }
};