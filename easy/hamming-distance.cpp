// Leetcode #461: Hamming Distance - Easy

class Solution {
 public:
  int hammingDistance(int x, int y) {
    int unique = x ^ y;
    int distance = 0;

    for (int i = 0; i < 31; ++i) {
      int mask = 1 << i;
      bool ith_bit_is_one = (unique & mask) != 0;
      if (ith_bit_is_one) {
        ++distance;
      }
    }

    return distance;
  }
};