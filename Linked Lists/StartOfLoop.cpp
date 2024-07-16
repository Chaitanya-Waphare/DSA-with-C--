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

void InsertAtHead( Node* &Head, int data) {
    Node* temp = new Node(data);
    temp-> next = Head;
    Head = temp;
}

void InsertAtTail(Node* &Tail, int data) {
    Node* temp = new Node(data);
    while(Tail-> next != NULL) {
        Tail = Tail-> next;
    }
    Tail-> next = temp;
    Tail = temp;
}



void PrintLL(Node* &Head) {
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

bool isCircular(Node* Head) {
    if(Head == NULL) {
        return true;
    }
    Node* temp = Head-> next;
    while(temp != NULL || temp != Head) {
        temp = temp-> next;
    }
    if(temp == Head) {
        return true;
    }
    return false;
}

bool DetectCycle(Node*& Head) {
    if(Head == NULL) {
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = Head;
    while(temp != NULL) {
        if(visited[temp] = true){
            return true;
        }
        visited[temp] = true;
        temp = temp-> next;
    }
    return false;
}

Node* FloydCycleDetection(Node* Head) {
    if(Head == NULL) {
        return NULL;
    }
    Node* slow = Head;
    Node* fast = Head;
    while(fast != NULL && slow != NULL) {
        fast = fast-> next;
        if(fast != NULL) {
            fast = fast-> next;
        }
        slow = slow-> next;
        if(fast == slow) {
            cout << "One of the Element of loop/ Point of Intersection is: " << slow-> data << endl; 
            return slow;
        }
    }
    return NULL;
}

Node* StartingNodeOfLoop(Node* Head) {
    Node* temp = Head;
    Node* POI = FloydCycleDetection(Head);
    while (temp != NULL) 
    {
        if(temp == POI) {
            return temp;
        }
        temp = temp-> next;
        POI = POI-> next;
    }
    return NULL;
}

int main()
{
    Node* Head = new Node(5);
    Node* Tail = Head;
    InsertAtHead(Head, 4);
    InsertAtHead(Head, 3);
    InsertAtHead(Head, 2);
    InsertAtHead(Head, 1);
    PrintLL(Head);
    InsertAtTail(Tail, 6);
    Tail-> next = Head-> next;
    // PrintLL(Head);
    if(DetectCycle(Head)) {
        cout << "Cycle is Present" << endl;
    }
    else{
        cout << "Cycle is NOT Present" << endl;
    }
    Node* ans = StartingNodeOfLoop(Head);
    cout << "Starting Node of Loop -> " << ans-> data << endl;
    return 0;
}