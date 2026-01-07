// Leetcode #350: Intersection of Two Arrays II - Easy

#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
 public:
  // horribly inefficient
  std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int, int> nums1_counts;
    std::unordered_map<int, int> nums2_counts;
    std::unordered_set<int> shared;
    std::vector<int> result;

    for (const int n : nums1) {
      nums1_counts[n] += 1;
    }
    for (const int n : nums2) {
      nums2_counts[n] += 1;
      if (nums1_counts[n] > 0) {
        shared.insert(n);
      }
    }

    for (const int n : shared) {
      const int count1 = nums1_counts[n];
      const int count2 = nums2_counts[n];

      const int shared_count = (count1 < count2 ? count1 : count2);

      for (int i = 0; i < shared_count; ++i) {
        result.push_back(n);
      }
    }

    return result;
  }
};