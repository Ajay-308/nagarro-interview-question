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


int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int left=0,right=0;
        if(root->left != NULL)left = maxDepth(root->left);
        if(root->right != NULL) right= maxDepth(root->right);
        return 1 + max(left,right);
        
    }