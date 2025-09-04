#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// check if linked list has a cycle or not
bool hasCycle(Node* head) {
    Node* slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

// check entry point of cycle in linkedlist
Node* cycleStart(Node* head) {
    Node* slow = head, *fast = head;

    // detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            // found cycle
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL; 
}

// remove cycle from linkedlist
void removeCycle(Node* head) {
    Node* start = cycleStart(head);
    if (!start) return; 

    Node* temp = start;
    while (temp->next != start) {
        temp = temp->next;
    }
    temp->next = NULL; // break cycle
}

// utility: print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{4, NULL};
    head->next->next->next->next = head->next; // cycle at node 2

    if (hasCycle(head)) {
        cout << "Cycle Detected\n";
        Node* entry = cycleStart(head);
        if (entry) {
            cout << "Cycle start at node with value: " << entry->data << "\n";
            removeCycle(head);
            if (!hasCycle(head)) {
                cout << "Cycle removed\n";
            }
            cout << "Cycle entry point was at node with value: " << entry->data << "\n";

            cout << "List after removing cycle: ";
            printList(head);
        }
    } else {
        cout << "No cycle found\n";
    }
}
