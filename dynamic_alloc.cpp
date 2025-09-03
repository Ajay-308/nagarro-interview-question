#include <iostream>
using namespace std;

class Student{
    string name;
public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

int main() {
    Student* s = new Student();  // dynamically allocate memory
    s->setName("Ajay");

    cout << "Name: " << s->getName() << endl;

    delete s;  // free the allocated memory
    return 0;
}


// Student* s

// This declares a pointer named s that can point to an object of type Student.

// At this point, s just holds an address (but we haven’t given it one yet).

// 2. new Student()

// The keyword new allocates memory on the heap for a Student object.

// new Student() also calls the constructor of the Student class.

// It returns a pointer to that newly created object.

// 3. Putting it together

// So Student* s = new Student(); means:

// Create a Student object on the heap.

// Get its address.

// Store that address in pointer s.

// That’s why you see Student twice:

// First Student* → defines the type of pointer.

// Second new Student() → actually creates the object.