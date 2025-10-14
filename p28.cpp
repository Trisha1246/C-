#include <iostream>
using namespace std;

template <class T1, class T2>
class MyClass {
    T1 data1;
    T2 data2;
public:
    void setData(T1 d1, T2 d2) {
        data1 = d1;
        data2 = d2;
    }
    void showData() {
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
    }
};

int main() {
    MyClass<int, float> obj1;
    MyClass<string, int> obj2;

    obj1.setData(10, 3.14);
    obj2.setData("Age", 25);

    obj1.showData();
    obj2.showData();

    return 0;
}

