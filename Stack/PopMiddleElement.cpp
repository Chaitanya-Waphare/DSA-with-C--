#include <bits/stdc++.h>

using namespace std;

void solve(stack<int>&inputStack, int count, int N) {
   if(count == N/2) {
      inputStack.pop();
      return;
   }
   int num = inputStack.top();
   inputStack.pop();
   solve(inputStack, count+1, N);
   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   solve(inputStack, count, N);
   
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