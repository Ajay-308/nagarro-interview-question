#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    // Pure virtual function
    virtual void start() = 0;
};

// Child class 1
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started with a key 🔑" << endl;
    }
};

// Child class 2
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike started with a button 🔘" << endl;
    }
};

int main() {
    Car c;
    c.start();

    Bike b;
    b.start();

    // Vehicle v;  ❌ ERROR: cannot instantiate abstract class

    Vehicle* v = new Car();  // polymorphism
    v->start();              // Car's version is called
    delete v;

    return 0;
}
