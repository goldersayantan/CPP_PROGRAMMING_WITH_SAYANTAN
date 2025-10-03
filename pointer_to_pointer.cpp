#include <iostream>
using namespace std;

int main() {
    int x = 10;        // normal variable
    int *p = &x;       // pointer to int (stores address of x)
    int **pp = &p;     // pointer to pointer (stores address of p)

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Value stored in p (address of x): " << p << endl;
    cout << "Value pointed by p (*p): " << *p << endl;

    cout << "Value stored in pp (address of p): " << pp << endl;
    cout << "Value pointed by pp (*pp, which is p): " << *pp << endl;
    cout << "Value pointed by *pp (**pp, which is x): " << **pp << endl;

    return 0;
}
