
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// ---------------- Recursive Traversals ----------------
void inOrderRecursive(Node* root, vector<int>& arr) {
    if (root == nullptr) return;
    inOrderRecursive(root->left, arr);
    arr.push_back(root->data);
    inOrderRecursive(root->right, arr);
}

void preOrderRecursive(Node* root, vector<int>& arr) {
    if (root == nullptr) return;
    arr.push_back(root->data);
    preOrderRecursive(root->left, arr);
    preOrderRecursive(root->right, arr);
}

void postOrderRecursive(Node* root, vector<int>& arr) {
    if (root == nullptr) return;
    postOrderRecursive(root->left, arr);
    postOrderRecursive(root->right, arr);
    arr.push_back(root->data);
}

// ---------------- Iterative Traversals ----------------

// Inorder Iterative
void inOrderIterative(Node* root, vector<int>& arr) {
    stack<Node*> st;
    Node* curr = root;

    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {   // go as left as possible
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top(); st.pop();
        arr.push_back(curr->data);
        curr = curr->right; // go right after visiting
    }
}

// Preorder Iterative
void preOrderIterative(Node* root, vector<int>& arr) {
    if (root == nullptr) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* node = st.top();
        st.pop();

        arr.push_back(node->data);

        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
    }
}

// Postorder Iterative (using two stacks)
void postOrderIterative(Node* root, vector<int>& arr) {
    if (root == nullptr) return;

    stack<Node*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        Node* node = st1.top(); st1.pop();
        st2.push(node);

        if (node->left) st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    while (!st2.empty()) {
        arr.push_back(st2.top()->data);
        st2.pop();
    }
}

// ---------------- Main ----------------
int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result;

    // Recursive Traversals
    result.clear();
    inOrderRecursive(root, result);
    cout << "Inorder Recursive: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    result.clear();
    preOrderRecursive(root, result);
    cout << "Preorder Recursive: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    result.clear();
    postOrderRecursive(root, result);
    cout << "Postorder Recursive: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    // Iterative Traversals
    result.clear();
    inOrderIterative(root, result);
    cout << "Inorder Iterative: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    result.clear();
    preOrderIterative(root, result);
    cout << "Preorder Iterative: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    result.clear();
    postOrderIterative(root, result);
    cout << "Postorder Iterative: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}
