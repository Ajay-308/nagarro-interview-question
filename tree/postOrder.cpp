#include <iostream>
#include <vector>
using namespace std;

// Define Node class
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

// Postorder traversal function
// left right root
void postOrder(Node* root, vector<int>& arr) {
    if (root == nullptr) return;

    postOrder(root->left, arr);
    postOrder(root->right, arr);
    arr.push_back(root->data);
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
    postOrder(root, result);

    // Print result
    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
