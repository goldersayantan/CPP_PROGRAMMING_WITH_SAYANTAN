#include <iostream>
using namespace std;

int main() {
    int x = 42;       // normal variable
    int *p = &x;      // pointer storing address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of pointer p: " << p << endl;

    cout << "Value at address stored in p (*p): " << *p << endl;

    // changing value using dereference
    *p = 99;
    cout << "New value of x (after *p = 99): " << x << endl;

    return 0;
}
