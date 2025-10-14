 
#include <iostream>
using namespace std;

class Example {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    void setValues(int p, int q, int r) {
        privateVar = p;
        protectedVar = q;
        publicVar = r;
    }

    void display() {
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

int main() {
    Example obj;
    obj.setValues(10, 20, 30);
    obj.display();
    return 0;
}


