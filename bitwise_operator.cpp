#include <iostream>
using namespace std;

int main()  {
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    // Bitwise &
    int bitwiseAnd = num1 & num2;
    cout << "The bitwise & result of " << num1 << " & " << num2 << " will be : " << bitwiseAnd << endl;

    // Bitwise |
    int bitwiseOr = num1 | num2;
    cout << "The bitwise | result of " << num1 << " | " << num2 << " will be : " << bitwiseOr << endl;

    // Bitwise ^
    int bitwiseXor = num1 ^ num2;
    cout << "The bitwise ^ result of " << num1 << " ^ " << num2 << " will be : " << bitwiseXor << endl;
    cout << endl;

    // Bitwise << and >>
    int num, index;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter the index value : ";
    cin >> index;

    // Left <<
    int leftShift = num << index;
    cout << "The bitwise << result of " << num << " << " << index << " will be : " << leftShift << endl;

    // Right >>
    int rightShift = num >> index;
    cout << "The bitwise >> result of " << num << " >> " << index << " will be : " << rightShift << endl;

}

