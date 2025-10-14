#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int value) {
        n = value;
    }
    Number operator-() {
        Number temp(-n);
        return temp;
    }
    void display() {
        cout << "Value: " << n << endl;
    }
};

int main() {
    Number num1(10);
    Number num2;

    num2 = -num1;

    num1.display();
    num2.display();

    return 0;
}

