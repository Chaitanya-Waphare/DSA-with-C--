#include <bits/stdc++.h>
using namespace std;

// Function to insert an element into the stack in sorted order
void insertInSortedOrder(stack<int>& s, int element) {
    // Base case: If stack is empty or top of stack is smaller or equal to the element
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }

    // Remove the top element
    int top = s.top();
    s.pop();

    // Recursive call
    insertInSortedOrder(s, element);

    // Push the top element back after inserting the element in sorted order
    s.push(top);
}

// Function to sort the stack and return the sorted stack
stack<int> sortStack(stack<int> s) {
    // Base case: If stack is empty, return the empty stack
    if (s.empty()) {
        return s;
    }

    // Remove the top element
    int top = s.top();
    s.pop();

    // Recursive call to sort the remaining stack
    s = sortStack(s);

    // Insert the top element back in sorted order
    insertInSortedOrder(s, top);

    return s;
}

// Main function
int main() {
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);

    cout << "Original Stack: ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Sort the stack and get the sorted stack
    stack<int> sortedStack = sortStack(s);

    cout << "Sorted Stack: ";
    while (!sortedStack.empty()) {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
    cout << endl;

    return 0;
}
