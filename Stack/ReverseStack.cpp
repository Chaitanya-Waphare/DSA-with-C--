#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int>& stack, int x) {
    if (stack.empty()) {
        stack.push(x);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, x);
    stack.push(num);
}

void reverseStack(stack<int>& stack) {
    if (stack.empty()) {
        return;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack, num);
}

void printStack(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    
    // Pushing elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    cout << "Original Stack: ";
    printStack(s); // Will print 5 4 3 2 1 because stack is LIFO
    
    reverseStack(s);
    
    cout << "Reversed Stack: ";
    printStack(s); // Should print 1 2 3 4 5
    
    return 0;
}
