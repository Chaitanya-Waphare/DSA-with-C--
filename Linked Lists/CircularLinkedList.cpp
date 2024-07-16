#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

void PrintCLL(Node* &Head) {
    Node* temp = Head;
    while(temp -> next != NULL) {
        cout << temp-> data << " ";
        temp -> next = Head;
    }
    cout << endl;
}


int main()
{
    return 0;
}