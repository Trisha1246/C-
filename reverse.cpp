#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "Interview";
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
    return 0;
}
