#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    float area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) { length = l; width = w; }
    float area() {
        return length * width;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) { base = b; height = h; }
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    Shape* s3 = new Triangle(3, 7);

    cout << "Area of Circle: " << s1->area() << endl;
    cout << "Area of Rectangle: " << s2->area() << endl;
    cout << "Area of Triangle: " << s3->area() << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}

