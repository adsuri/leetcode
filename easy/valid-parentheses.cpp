// Leetcode #20: Valid Parantheses - Easy

#include <stack>
#include <string>

class Solution {
 public:
  bool isValid(std::string s) {
    std::stack<char> st;

    for (char character : s) {
      if (st.empty() && (character == '}' || character == ')' || character == ']')) {
        return false;
      }

      if (character == '{' || character == '(' || character == '[') {
        st.push(character);
      } else if (character == '}') {
        if (st.top() == '{') {
          st.pop();
        } else {
          return false;
        }
      } else if (character == ')') {
        if (st.top() == '(') {
          st.pop();
        } else {
          return false;
        }
      } else if (character == ']') {
        if (st.top() == '[') {
          st.pop();
        } else {
          return false;
        }
      }
    }

    return st.empty() ? true : false;
  }
};