#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>

bool isBalanced(const std::string& expression) {
    std::stack<char> stack;
    std::unordered_map<char, char> brackets = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char ch : expression) {
        if (brackets.find(ch) == brackets.end()) {
            // Character is not a closing bracket, push it onto the stack
            stack.push(ch);
        } else {
            // Character is a closing bracket
            if (stack.empty() || stack.top() != brackets[ch]) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main() {
    std::string exp1 = "([])({})";
    std::string exp2 = "([)]";
    std::string exp3 = "(()";
    std::string exp4 = "() ()] ()}";

    if (isBalanced(exp1)) {
        std::cout << "balanced" << std::endl;
    } else {
        std::cout << "not balanced" << std::endl;
    }

    if (isBalanced(exp2)) {
        std::cout << "balanced" << std::endl;
    } else {
        std::cout << "not balanced" << std::endl;
    }

    if (isBalanced(exp3)) {
        std::cout << "balanced" << std::endl;
    } else {
        std::cout << "not balanced" << std::endl;
    }

    if (isBalanced(exp4)) {
        std::cout << "balanced" << std::endl;
    } else {
        std::cout << "not balanced" << std::endl;
    }

    return 0;
}
