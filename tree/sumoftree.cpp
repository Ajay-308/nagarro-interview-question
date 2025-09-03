#include <iostream>
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

// Function to calculate sum of all nodes
int sumOfTree(Node* root) {
    if (root == nullptr) return 0;
    return root->data + sumOfTree(root->left) + sumOfTree(root->right);
}

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

    int total = sumOfTree(root);
    cout << "Sum of all nodes in the tree: " << total << endl;

    return 0;
}
