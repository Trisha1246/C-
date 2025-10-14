#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int value = 0) {
        n = value;
    }
    friend Number operator+(Number &obj1, Number &obj2);
    void display() {
        cout << "Value: " << n << endl;
    }
};

Number operator+(Number &obj1, Number &obj2) {
    return Number(obj1.n + obj2.n);
}

int main() {
    Number num1(10), num2(20);
    Number num3 = num1 + num2;

    num1.display();
    num2.display();
    num3.display();

    return 0;
}

