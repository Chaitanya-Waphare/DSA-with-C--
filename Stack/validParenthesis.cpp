#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool matches(char c1, char c2) {
    if(c1 == '(' && c2 == ')') {
        return true;
    }
    if(c1 == '[' && c2 == ']') {
        return true;
    }
    if (c1 == '{' && c2 == '}') {
        return true;
    }
    else {
        return false;
    }
}

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> ans;
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            ans.push(ch);
        }
        else {
            if(!ans.empty()) {
                char top = ans.top();
                if(matches(top, ch)) {
                    ans.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    return ans.empty();
}

int main() {
    // Test cases
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    string test5 = "{[]}";
    string test6 = "{[()]}";
    string test7 = "{[}";
    
    cout << "Test 1: " << (isValidParenthesis(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (isValidParenthesis(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (isValidParenthesis(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << (isValidParenthesis(test4) ? "Valid" : "Invalid") << endl;
    cout << "Test 5: " << (isValidParenthesis(test5) ? "Valid" : "Invalid") << endl;
    cout << "Test 6: " << (isValidParenthesis(test6) ? "Valid" : "Invalid") << endl;
    cout << "Test 7: " << (isValidParenthesis(test7) ? "Valid" : "Invalid") << endl;

    return 0;
}
