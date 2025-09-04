#include <iostream>
#include <vector>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val = value;
        left = right = nullptr;
    }
};


bool isBalanced(TreeNode* root) {
        bool balanced = true;
        check(root, balanced);
        return balanced;
    }

    int check(TreeNode* root, bool &balanced) {
        if (root == nullptr) return 0;

        int left = check(root->left, balanced);
        int right = check(root->right, balanced);

        if (abs(left - right) > 1) balanced = false;

        return max(left, right) + 1;
    }