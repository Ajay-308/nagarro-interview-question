#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s;
    stack<int> p;

    // queue --> 1,2,3,4,5
    // stack1--> 5,4,3,2,1
    // stack2 pop--> 1,2,3,4,5
    MyQueue() {}

    void push(int x) {
        s.push(x);
    }

    int pop() {
        if (p.empty()) {
            while (!s.empty()) {
                p.push(s.top());
                s.pop();
            }
        }
        int t = p.top();
        p.pop();
        return t;
    }

    int peek() {
        if (p.empty()) {
            while (!s.empty()) {
                p.push(s.top());
                s.pop();
            }
        }
        return p.top();
    }

    bool empty() {
        return s.empty() && p.empty();
    }
};


int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    cout << q.peek() << endl; // returns 1
    cout << q.pop() << endl;  // returns 1
    cout << q.empty() << endl; // returns false
    return 0;
}


// 🔹 Overall Complexity

// Amortized Time Complexity:

// push: O(1)

// pop: O(1) (amortized, worst O(n))

// peek: O(1) (amortized, worst O(n))

// empty: O(1)

// Space Complexity:

// Two stacks, together holding n elements at most.
// ✅ O(n)
