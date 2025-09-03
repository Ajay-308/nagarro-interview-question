#include <iostream>
#include <vector>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Inorder traversal function
void inOrder(Node* root, vector<int>& arr) {
    if (root == nullptr) return;

    inOrder(root->left, arr);      // Traverse left subtree
    arr.push_back(root->data);     // Visit root
    inOrder(root->right, arr);     // Traverse right subtree
}

int main() {
    // Build the tree
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

    // Store traversal result
    vector<int> result;
    inOrder(root, result);

    // Print result
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
