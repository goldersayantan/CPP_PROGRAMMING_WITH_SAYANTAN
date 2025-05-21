#include <iostream>
using namespace std;
int main()  {
    int a  = 10, b = 5;

    // arithmetic operators
    cout << "Sum : " << (a + b) << endl;
    cout << "Difference : " << (a - b) << endl;
    cout << "Product : " << (a * b) << endl;
    cout << "Division : " << (a / b) << endl;
    cout << "Modulation : " << (a % b) << endl;

    // ralational operators
    cout << (a < b) << endl; // false -> 0
    cout << (a > b) << endl; // true -> 1
    cout << (a <= 10) << endl;
    cout << (b >= 10) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    // logical operator
    cout << ((10 >= 5) && (7 >= 5)) << endl; // true -> 1
    cout << ((10 >= 15) || (5 <= 6)) << endl; // true -> 1
    cout << !(3 < 10) << endl;

    // unary operators

    // Post Increment
    int num = 10;
    int new_num = num++;
    cout << "num : " << num << endl;
    cout << "new num : " << new_num << endl;

    // Pre Incremenet
    int num1 = 10;
    int new_num1 = ++num1;
    cout << "num1 : " << num1 << endl;
    cout << "new num1 : " << new_num1 << endl;

    // Post decrement
    int num2 = 20;
    int new_num2 = num2--;
    cout << "num2 : " << num2 << endl;
    cout << "new num2 : " << new_num2 << endl;

    // Pre decrement
    int num3 = 20;
    int new_num3 = --num3;
    cout << "num3 : " << num3 << endl;
    cout << "new num3 : " << new_num3 << endl;



}
