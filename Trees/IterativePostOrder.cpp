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

vector<int> IterativePostOrder(Node* root) {
    vector<int> ans;
    stack<Node*> st1, st2;
    st1.push(root);
    while(!st1.empty()) {
        root = st1.top();
        st2.push(root);
        st1.pop();
        if(root->left != NULL) {
            st1.push(root->left);
        }
        if(root->right != NULL) {
            st1.push(root->right);
        }
    }
    while(!st2.empty()) {
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}


int main()
{
    Node* root = new Node(1);
    root ->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> ans = IterativePostOrder(root);
    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i] << " ";
    }
    cout << endl;
    return 0;
}