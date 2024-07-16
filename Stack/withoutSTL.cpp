#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int* arr;
    int top;
    int size;

    Stack(int size) {
        this-> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top <= 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = element;
    }

    void pop() {
        if(top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top = top - 1;
    }

    int peek() {
        return arr[top];
    }

    bool isEmpty() {
        if (top < 0) {
            return 1;
        }
        return 0;
    }


};

int main()
{

    Stack* s = new Stack(5);
    s->push(5);
    s->push(4);
    s->push(3);
    s->push(2);
    s->push(1);
    // s->push(0);
    cout<< s->peek() << endl;
    s->pop();
    cout << s->peek() << endl;

    return 0;
}