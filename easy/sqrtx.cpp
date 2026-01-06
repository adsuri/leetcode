// Leetcode #69: Sqrt(x) - Easy

class Solution {
 public:
  int mySqrt(int x) {
    int largest = 0;
    const long long_x = (long) x;

    for (long i = 0; (int) i <= x; ++i) {
      const long square = i * i;

      if (square == long_x) {
        return (int) i;
      } else if (square < long_x) {
        largest = (int) i;
      } else if (square > long_x) {
        return largest;
      }
    }

    return largest;
  }
};