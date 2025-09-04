#include <iostream>
#include <cstddef>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr){
        
    }

};

ListNode* removeElements(ListNode* head, int val) {
    if (head == nullptr) return nullptr;
    while (head != nullptr && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while (temp != nullptr) {
        if (temp->val == val) {
            prev->next = prev->next->next;
            delete temp; 
            temp = prev->next; 
        } else {
            prev = temp; 
            temp = temp->next;
        }
    }

    return head;
