#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // override base function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;     // base class pointer
    Dog d;

    a = &d;
    a->sound();   // Output: Dog barks (runtime decision)
    return 0;
}