#include <iostream>
using namespace std;

int main() {
    int *p = nullptr;   // pointer not pointing anywhere

    if (p == nullptr) {
        cout << "Pointer is null, not pointing to any variable." << endl;
    }

    int x = 10;
    p = &x;   // now p points to x
    cout << "Pointer is now pointing to x with value: " << *p << endl;

    return 0;
}
