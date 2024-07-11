class Solution {
public:
    string reverseParentheses(string s) {
       stack<string> stack;
        string current;

        for (char c : s) {
            if (c == '(') {
                stack.push(current);
                current = "";
            } else if (c == ')') {
                reverse(current.begin(), current.end());
                if (!stack.empty()) {
                    current = stack.top() + current;
                    stack.pop();
                }
            } else {
                current += c;
            }
        }

        return current;
    }
};