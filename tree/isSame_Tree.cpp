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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) {
        return true;
    }
    
    if (p && q && p->val == q->val) {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    
    return false; 
    
}