// Leetcode #100: Same Tree - Easy

 struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) {
      return true;
    } else if (p == nullptr && q != nullptr) {
      return false;
    } else if (p != nullptr && q == nullptr) {
      return false;
    } else if (p->val != q->val) {
      return false;
    }

    bool left_equal = isSameTree(p->left, q->left);
    bool right_equal = isSameTree(p->right, q->right);

    return left_equal && right_equal;
  }
};