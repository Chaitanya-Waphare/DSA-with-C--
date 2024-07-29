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


vector<int> IterativePreOrder(Node* root) {

    vector<int> ans;
    stack<Node*> st;
    st.push(root);
        if(root == NULL) {
        return ans;
    }
    while(!st.empty()) {
        root = st.top();
        ans.push_back(root->data);
        st.pop();
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
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
    vector<int> ans = IterativePreOrder(root);
    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i] << " ";
    }
    cout << endl;
    return 0;
}