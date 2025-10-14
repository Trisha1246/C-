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
        cout << "Derived1 function" << endl;
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "Derived2 function" << endl;
    }
};

class Hybrid : public Derived1, public Derived2 {
public:
    void showHybrid() {
        cout << "Hybrid class function" << endl;
    }
};

int main() {
    Hybrid obj;
    obj.Derived1::showBase();
    obj.showDerived1();
    obj.showDerived2();
    obj.showHybrid();
    return 0;
}

