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

void insertAtHead(Node* &Head, int data) {
    Node* temp = new Node(data);
    temp -> next = Head;
    Head = temp;
}

void insertAtTail(Node* &Tail, int data) {
    Node* temp = new Node(data);
    Tail -> next = temp;
    Tail = temp;
}

void printLL(Node* Head) {
    while (Head != NULL) {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

Node* MiddleOfLL(Node* Head) {
    Node* temp = Head;
    if(Head == NULL || Head -> next == NULL) {
        return Head;
    }

    if(Head -> next -> next == NULL) {
        return Head-> next;
    }

    Node* slow = Head;
    Node* fast = Head-> next;
    while(fast != NULL) {
        fast = fast-> next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow-> next;
    }
    return slow;
}

int main()
{
    Node* Head = new Node(5);
    insertAtHead(Head, 4);
    insertAtHead(Head, 3);
    insertAtHead(Head, 2);
    insertAtHead(Head, 1);
    printLL(Head);
    Node* Mid = MiddleOfLL(Head);
    printLL(Mid);
    return 0;
}