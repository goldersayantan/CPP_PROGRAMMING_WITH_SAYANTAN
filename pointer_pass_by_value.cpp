#include <iostream>
using namespace std;

void updatePointer(int *p) {
    int y = 50;
    p = &y;   // changes only local copy of p, not caller's pointer
}

int main() {
    int x = 10;
    int *ptr = &x;

    cout << "Before : " << *ptr << endl;
    updatePointer(ptr);
    cout << "After : " << *ptr << endl;   // still prints 10
}
