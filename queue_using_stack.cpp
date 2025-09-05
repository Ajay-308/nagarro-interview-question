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
