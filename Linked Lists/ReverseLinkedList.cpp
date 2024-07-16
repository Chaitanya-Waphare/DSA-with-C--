#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this-> data = data;
        this-> next = NULL;
    }
};

void Print(Node* &Head) {
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

void InsertAtHead(Node* &Head, int data){
    Node* temp = new Node(data);
    temp-> next = Head;
    Head = temp;
}

Node* ReverseLinkeList(Node* &Head) {
    Node* prev = NULL;
    Node* curr = Head;
    Node* forward = NULL;
    while(curr != NULL) {
        forward = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main()
{
    Node* node = new Node(12);
    Node* Head = node;
    InsertAtHead(Head, 13);
    InsertAtHead(Head, 14);
    Print(Head);
    Node* Ans = ReverseLinkeList(Head);
    Print(Ans);
    return 0;
}