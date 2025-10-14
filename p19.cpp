 
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class function" << endl;
    }
};

class Derived2 : public Derived1 {
public:
    void showDerived2() {
        cout << "Derived2 class function" << endl;
    }
};

int main() {
    Derived2 obj;
    obj.showBase();
    obj.showDerived1();
    obj.showDerived2();
    return 0;
}
 

