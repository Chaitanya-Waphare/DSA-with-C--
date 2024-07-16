#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node* left = NULL;
        Node* right = NULL;

        Node(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
};

int main()
{
    Node* root = new Node(15);
    root -> left = new Node(12);
    root -> right = new Node(18);
    cout << "Root Node -> " << root -> data << endl;
    cout << "Left Child -> " << root -> left -> data << endl;
    cout << "Right child -> " << root -> right -> data << endl;
    cout << "Left Child Address -> " << root -> left << endl;
    cout << "Left Child's Left child Adress -> " << root -> left -> left << endl; 
    return 0;
}