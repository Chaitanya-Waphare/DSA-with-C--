#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{') {
            count1++;
        }
        if (s[i] == '}') {
            count2++;
        }
    }
    if (abs(count1 - count2) % 2 == 0) {
        return true;
    }
    return false;
}

int findMinimumCost(string str) {
    stack<char> ans;
    if (!isValid(str)) {
        return -1;
    }
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '{') {
            ans.push(str[i]);
        } else {
            if (!ans.empty() && ans.top() == '{') {
                ans.pop();
            } else {
                ans.push(str[i]);
            }
        }
    }
    int a = 0;
    int b = 0;
    while (!ans.empty()) {
        if (ans.top() == '{') {
            a++;
        } else {
            b++;
        }
        ans.pop();
    }
    int s = (a + 1) / 2 + (b + 1) / 2;
    return s;
}

int main() {
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);

    int result = findMinimumCost(expression);
    if (result == -1) {
        cout << "The expression is invalid." << endl;
    } else {
        cout << "The minimum cost to make the expression valid is: " << result << endl;
    }

    return 0;
}
