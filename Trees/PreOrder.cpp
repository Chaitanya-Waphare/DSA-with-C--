#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left = NULL;
    Node* right = NULL;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(Node* root) {
    Node *temp = root;
    if(root == NULL) {
        return;
    }
    cout << temp->data << " ";
    PreOrder(temp->left);
    PreOrder(temp->right);
}

void Inorder(Node* root) {
    Node* temp = root;
    if(temp == NULL) {
        return;
    }
    Inorder(temp -> left);
    cout << temp -> data << " ";
    Inorder(temp -> right);
}

void PostOrder(Node* root) {
    Node* temp = root;
    if(temp == NULL) {
        return;
    }
    PostOrder(temp -> right);
    PostOrder(temp -> left);
    cout << root -> data << " ";
}

int main() {
    // Creating a binary tree manually
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Calling PreOrder function
    cout << "PreOrder Traversal: ";
    PreOrder(root);
    cout << endl;

    cout << "InOrder Traversal: ";
    Inorder(root);
    cout << endl;

    cout << "PostOrder Traversal: ";
    PostOrder(root);
    cout << endl;
    return 0;
}
