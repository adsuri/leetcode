// Leetcode #345: Reverse Vowels of a String - Easy
#include <string>


bool is_vowel(char s) {
  return s == 'a'
      || s == 'e'
      || s == 'i'
      || s == 'o'
      || s == 'u'
      || s == 'A'
      || s == 'E'
      || s == 'I'
      || s == 'O'
      || s == 'U';
}

class Solution {
 public:
  std::string reverseVowels(std::string s) {
    int left = 0;
    int right = s.length() - 1;

    while (right > left) {
      if (!is_vowel(s[left])) {
        ++left;
      } else if (!is_vowel(s[right])) {
        --right;
      } else {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        ++left;
        --right;
      }
    }
    return s;
  }
};