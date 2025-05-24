#include <iostream>
using namespace std;

// returnType void
void printHelloworld()   {
    cout << "Hello World" << endl;
}

// returnType int
int printNumber()   {
    cout << "The number is printed.";
    return 5;
}

int main()  {
    printHelloworld();
    printHelloworld();

    int value = printNumber();
    cout << value << endl;
}




