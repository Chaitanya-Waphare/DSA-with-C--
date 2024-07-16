#include <bits/stdc++.h>
using namespace std;

void PrintStack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

bool isEmpty(stack<int> s) {
    if(s.empty()) {
        return 1;
    }
    return 0;
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << "Top element is: " << s.top() << endl;
    PrintStack(s);
    s.pop();
    PrintStack(s);
    if(isEmpty(s)) {
        cout << "The stack is Empty" << endl;
    }
    else {
        cout << "The stack is not Empty" << endl;
    }
    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;

    return 0;
}