#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle(int l) {
        length = l;
        width = l;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}

