#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(NULL) {}
};


bool isPalindrome(ListNode* head) {
    vector<int> ans;
    ListNode * cur = head;
    while(cur){
        ans.push_back(cur->data);
        cur=cur->next;
    }
    for(int i = 0; i < ans.size()/2; i++)
        if(ans[i] != ans[ans.size()-1-i]) return false;
    return true; 
}

void printList(ListNode* head){
    while(head){
        cout<<head->data<<" ";
        head= head->next;
    }
}

 bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Step 1: Find middle (slow will point to middle)
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    ListNode* prev = nullptr;
    ListNode* curr = slow;
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    // Step 3: Compare first half and reversed second half
    ListNode* first = head;
    ListNode* second = prev;
    while (second) {
        if (first->data != second->data) return false;
        first = first->next;
        second = second->next;
    }

    return true;
}