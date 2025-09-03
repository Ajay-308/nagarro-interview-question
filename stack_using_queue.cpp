// implement stack using one queue

#include <stdio.h>
#include <queue>
using namespace std;

queue<int> q1;

// stack ke operation 
// push , pop , top , empty

void push(int val){
    q1.push(val);
    for (int i = 0; i < q1.size() - 1; i++) {
        q1.push(q1.front());
        q1.pop();
    }
}

bool empty(){
    return q1.empty();
}

int top(){
    if(q1.empty()) return -1;
    return q1.front();
}

int pop(){
    if(q1.empty()) return -1;
    int val = q1.front();
    q1.pop();
    return val;
}


