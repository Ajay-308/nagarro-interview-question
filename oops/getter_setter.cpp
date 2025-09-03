#include <iostream>
using namespace std;

class Student {
private:
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
    Student s;

    // using setter
    s.setName("Ajay");

    // using getter
    cout << "Name: " << s.getName() << endl;

    return 0;
}
