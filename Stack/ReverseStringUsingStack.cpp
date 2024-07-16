#include <bits/stdc++.h>
using namespace std;

stack<char> ReverseUsingStack(string s) {
    stack<char> ans;
    int i = 0;
    while(s[i] != '\0') {
        ans.push(s[i]);
        i++;
    }
    return ans;
}

void PrintStack(stack<char> ans) {
    while(!ans.empty()) {
        cout << ans.top() << "";
        ans.pop();
    }
    cout << endl;
}

int main()
{
    string s = "love";
    stack<char> ans = ReverseUsingStack(s);
    PrintStack(ans);
    return 0;
}