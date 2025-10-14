#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int value = 0) {
        n = value;
    }
    friend Number operator-(Number &obj);
    void display() {
        cout << "Value: " << n << endl;
    }
};

Number operator-(Number &obj) {
    return Number(-obj.n);
}

int main() {
    Number num1(10);
    Number num2 = -num1;

    num1.display();
    num2.display();

    return 0;
}

