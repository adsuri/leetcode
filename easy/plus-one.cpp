// Leetcode #66: Plus One - Easy

#include <vector>

class Solution {
 public:
  std::vector<int> plusOne(std::vector<int>& digits) {
    int index = digits.size() - 1;

    while (index >= 0) {
      if (digits[index] != 9) {
        digits[index] += 1;
        return digits;
      } else {
        digits[index] = 0;
      }
      --index;
    }

    digits.insert(digits.begin(), 1);

    return digits;
  }
};