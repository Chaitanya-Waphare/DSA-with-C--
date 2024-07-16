#include<iostream>
#include<bits/stdc++.h>
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

void InsertAtPosition(Node* &Head, int position, int data) {
    if(position == 1) {
        insertAtHead(Head, data);
        return;
    }
    Node* temp = Head;
    int count = 1;
    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }
    Node* InsertAtPos = new Node(data);
    InsertAtPos -> next = temp -> next;
    temp -> next = InsertAtPos;
}

void printLL(Node* Head) {
    while (Head != NULL) {
        cout << Head->data << " ";
        Head = Head->next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node *ptr = new Node(14);
    node1 -> next = ptr;
    cout << "Node1: " << node1 -> data << endl;
    cout << "Node1 -> Next: " << node1 -> next<< endl;
    cout << "Node1 -> Next -> Data: " << node1 -> next -> data << endl;
    Node* Head = node1;
    Node* Tail = node1;
    insertAtHead(Head, 13);
    insertAtHead(Head, 15);
    printLL(Head);
    insertAtTail(Tail, 12);
    insertAtTail(Tail, 11);
    printLL(Head);
    InsertAtPosition(Head, 3, 20);
    printLL(Head);
    return 0;
}