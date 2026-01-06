// Leetcode #83: Remove Duplicates from Sorted List - Easy

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr) { return nullptr; }

    for (ListNode* node = head; node != nullptr; node = node->next) {
      if (node->next == nullptr) {
        return head;
      }

      bool followed_by_equal = (node->next)->val == node->val;

      while (followed_by_equal) {
        if ((node->next)->next == nullptr) {
          delete node->next;
          node->next = nullptr;
        } else {
          ListNode* to_delete = node->next;
          node->next = to_delete->next;
          delete to_delete;
        }

        if (node->next != nullptr) {
          followed_by_equal = (node->next)->val == node->val;
        } else {
          followed_by_equal = false;
        }
      }
    }

    return head;
  }
};