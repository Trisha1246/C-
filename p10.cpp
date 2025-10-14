#include <iostream>
using namespace std;

class Example {
    int data;
public:
    Example() {
        data = 10;
        cout << "Constructor called. Data initialized to " << data << endl;
    }
    ~Example() {
        cout << "Destructor called. Object destroyed." << endl;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Example obj;
    obj.display();
    return 0;
}

