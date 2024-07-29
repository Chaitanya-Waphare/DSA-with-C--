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

vector<int> IterativeInOrder(Node* root) {
        vector<int> ans;
        stack<Node*> st;
        if(root == NULL) {
            return ans;
        }
        Node* node = root;
        while(true) {
            if(node != NULL) {
                st.push(node);
                node = node->left;
            }
            else {
                if(st.empty()) break;
                node = st.top();
                st.pop();
                ans.push_back(node->data);
                node = node->right;
            }
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
    vector<int> ans = IterativeInOrder(root);
    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i] << " ";
    }
    cout << endl;
    return 0;
}