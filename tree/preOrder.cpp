#include <iostream>
#include <vector>
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

// Preorder Traversal (Recursive)
void preOrderRecursive(Node* root, vector<int>& arr) {
    if (root == nullptr) return;
    arr.push_back(root->data);            // Visit root
    preOrderRecursive(root->left, arr);   // Left subtree
    preOrderRecursive(root->right, arr);  // Right subtree
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

    vector<int> result;
    preOrderRecursive(root, result);

    cout << "Preorder Traversal (Recursive): ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}
