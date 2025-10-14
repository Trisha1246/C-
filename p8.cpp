#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int area(int base, int height, int multiplier) {
    return base * height * multiplier;
}

int main() {
    cout << "Area of square: " << area(5) << endl;
    cout << "Area of rectangle: " << area(4, 6) << endl;
    cout << "Area of circle: " << area(3.0) << endl;
    cout << "Area of triangle: " << area(4.0, 5.0) << endl;
    cout << "Area of parallelogram: " << area(6, 4, 1) << endl;
    return 0;
}

