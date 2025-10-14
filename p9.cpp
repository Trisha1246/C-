#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() : length(0) {}
    void setLength(int l) {
        length = l;
    }
    friend void printLength(Box b);
};

void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b;
    b.setLength(10);
    printLength(b);
    return 0;
}
