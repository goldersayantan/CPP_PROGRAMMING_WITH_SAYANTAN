#include <iostream>
using namespace std;

void updatePointer(int* &p) {  // notice int*&
    int y = 50;
    p = &y;   // this changes the caller’s pointer too
}

int main() {
    int x = 10;
    int *ptr = &x;

    cout << "Before: " << *ptr << endl;
    updatePointer(ptr);   // passing pointer by reference

    cout << "After: " << *ptr << endl;  // now points to y
}
