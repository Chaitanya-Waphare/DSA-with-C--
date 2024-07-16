#include <bits/stdc++.h>
using namespace std;

// Function to delete the middle element from the stack
void deleteMiddle(stack<int>& inputStack, int N) {
    int count = N / 2;
    int i = N;
    vector<int> ans;
    while (i > count) {
        ans.push_back(inputStack.top());
        inputStack.pop();
        i--;
    }
    inputStack.pop();  // Remove the middle element
    int j = ans.size() - 1;
    while (j >= 0) {
        inputStack.push(ans[j]);
        j--;
    }
}

int main() {
    // Create a stack and push elements into it
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);  // Stack: 1, 2, 3, 4, 5 (5 is the top)

    int N = inputStack.size()-1;

    // Print the stack before deleting the middle element
    cout << "Stack before deleting middle element: ";
    stack<int> tempStack = inputStack; // Create a copy to print
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Delete the middle element
    deleteMiddle(inputStack, N);

    // Print the stack after deleting the middle element
    cout << "Stack after deleting middle element: ";
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}
