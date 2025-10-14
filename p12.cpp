#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int value) {
        n = value;
    }
    Number(const Number &obj) {
        n = obj.n;
    }
    void show() {
        cout << n << endl;
    }
};

int main() {
    Number num1(10);
    Number num2 = num1;

    num1.show();
    num2.show();

    return 0;
}

