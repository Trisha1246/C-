#include <iostream>
using namespace std;

class Address {
    string city;
public:
    void setCity(string c) { city = c; }
    void showCity() { cout << city << endl; }
};

class Person {
    string name;
    Address addr;
public:
    void setName(string n) { name = n; }
    void setCity(string c) { addr.setCity(c); }
    void show() { cout << name << " "; addr.showCity(); }
    Person* getThis() { return this; }
};

class Base {
public:
    void baseFunc() { cout << "Base class function" << endl; }
};

class Derived1 : virtual public Base { };
class Derived2 : virtual public Base { };
class Final : public Derived1, public Derived2 { };

int main() {
    Person p;
    p.setName("Alice");
    p.setCity("NY");
    p.show();

    Person* ptr = p.getThis();
    ptr->show();

    Final f;
    f.baseFunc();

    return 0;
}

