#include <iostream>
using namespace std;

int display(int a = 10, int b = 20, int c = 30) {
    return a+b+c;
}

int main() {
    display();
    display(5);
    display(5, 15);
    display(5, 15, 25);
    return 0;
}

