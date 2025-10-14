#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float p = 3.5, q = 2.5;
    double r = 4.2, s = 1.8;

    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Sum of floats: " << add(p, q) << endl;
    cout << "Sum of doubles: " << add(r, s) << endl;

    return 0;
}

