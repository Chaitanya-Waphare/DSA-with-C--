#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this-> data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &Head, int data) {
    Node* temp = new Node(data);
    temp->next = Head;
    Head->prev = temp;
    Head = temp;
}

void PrintDLL(Node* Head) {
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(Node* &Tail, int data) {
    Node* temp = Tail;
    while(temp->next != NULL) {
        temp = temp-> next;
    }
    Node* Insert = new Node(data);
    temp -> next = Insert;
    Insert -> prev = temp;
    Tail = Insert;
}

int main()
{
    Node* node1 = new Node(15);
    Node* Head = node1;
    Node* Tail = node1;
    PrintDLL(Head);
    InsertAtHead(Head, 12);
    PrintDLL(Head);
    InsertAtTail(Tail, 22);
    PrintDLL(Head);
    return 0;
}