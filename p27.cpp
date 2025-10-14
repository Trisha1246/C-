#include <iostream>
using namespace std;

template <class T>
class MyClass {
    T data;
public:
    void setData(T d) { data = d; }
    T getData() { return data; }
};

int main() {
    MyClass<int> obj1;
    MyClass<float> obj2;
    MyClass<string> obj3;

    obj1.setData(10);
    obj2.setData(3.14);
    obj3.setData("Hello");

    cout << "Integer: " << obj1.getData() << endl;
    cout << "Float: " << obj2.getData() << endl;
    cout << "String: " << obj3.getData() << endl;

    return 0;
}

