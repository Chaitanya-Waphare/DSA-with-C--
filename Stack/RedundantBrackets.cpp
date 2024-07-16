#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> ans;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            ans.push(s[i]);
        } else {
            if (s[i] == ')') {
                bool isRedundant = true;
                while (ans.top() != '(') {
                    if (ans.top() == '+' || ans.top() == '-' || ans.top() == '*' || ans.top() == '/') {
                        isRedundant = false;
                    }
                    ans.pop();
                }
                if (isRedundant == true) {
                    return true;
                }
                ans.pop();
            }
        }
    }
    return false;
}

int main() {
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);

    if (findRedundantBrackets(expression)) {
        cout << "The expression contains redundant brackets." << endl;
    } else {
        cout << "The expression does not contain redundant brackets." << endl;
    }

    return 0;
}
