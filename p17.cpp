#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
};

int main() {
    Derived obj;
    obj.show();
    return 0;
}

