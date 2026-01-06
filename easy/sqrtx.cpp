// Leetcode #69: Sqrt(x) - Easy

class Solution {
 public:
  int mySqrt(int x) {
    long largest = 0;

    for (int i = 0; i <= x; ++i) {
      long long_i = (long) i;
      long long_x = (long) x;

      if (long_i * long_i <= long_x) {
        largest = i;
      } else if (long_i * long_i > long_x) {
        return largest;
      }
    }

    return largest;
  }
};