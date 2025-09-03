#include <iostream>>
using namespace std;
// compile time polymorphism

class Shape{
    public:
    void add(){
        cout << "hello my name is ajay" << endl;
    }

    int add(int a){
        cout << "hello my name is ajay"<<endl;
        return a + 1;
    }

};
