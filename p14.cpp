#include <iostream>
using namespace std;

class Number {
    int n;
public:
    Number(int value) {
        n = value;
    }
    Number operator+(Number obj) {
        return Number(n + obj.n);
    }
    void show() {
        cout << n << endl;
    }
};

int main() {
    Number a(5), b(10);
    Number c = a + b;

    a.show();
    b.show();
    c.show();

    return 0;
}

