// implement stack using one queue

#include <stdio.h>
#include <queue>
#include <iostream>
using namespace std;
// stack ke operation
// push , pop , top , empty
class MyStack {
    queue<int> q;

public:
    void push(int val) {
        q.push(val);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty()) return -1;
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};



// void push(int val){
//     q.push(val);
//     for (int i = 0; i < q.size() - 1; i++) {
//         q1.push(q1.front());
//         q1.pop();
//     }
// }

// bool empty(){
//     return q1.empty();
// }

// int top(){
//     if(q1.empty()) return -1;
//     return q1.front();
// }

// int pop(){
//     if(q1.empty()) return -1;
//     int val = q1.front();
//     q1.pop();
//     return val;
// }



int main() {
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top: " << st.top() << endl;   // 3
    cout << "Pop: " << st.pop() << endl;   // 3
    cout << "Top: " << st.top() << endl;   // 2

    st.push(4);
    cout << "Top: " << st.top() << endl;   // 4
}

// 🔹 Overall Complexity

// Push → O(n)

// Pop → O(1)

// Top → O(1)

// Empty → O(1)

// Space Complexity → O(n) (only one queue holding all elements).
