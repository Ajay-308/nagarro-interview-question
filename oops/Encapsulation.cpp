#include <iostream>
using namespace std;

class Student {
private:
    int marks;   // private variable

public:
    // Constructor
    Student() {
        marks = 0;   // default
    }

    // Setter
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks" << endl;
        }
    }

    // Getter
    int getMarks() {
        return marks;
    }
};

// Derived class King inherits Student
class King : public Student {
    // nothing extra, inherits everything
};

int main() {
    Student s;
    s.setMarks(90);
    cout << s.getMarks() << endl;

    King k;
    k.setMarks(30);
    cout << k.getMarks() << endl;

    // cout << s.marks; ❌ ERROR: 'marks' is private in Student

    return 0;
}
