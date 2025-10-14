#include <iostream>
using namespace std;

namespace First {
    void display() {
        cout << "This is the First namespace." << endl;
    }
}

namespace Second {
    void display() {
        cout << "This is the Second namespace." << endl;
    }
}

int main() {
    First::display();
    Second::display();

    using namespace First;
    display();

    return 0;
}

