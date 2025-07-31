#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout << "Enter a decimal number : ";
    cin >> decimalNumber;

    int temp = decimalNumber;
    int binaryNumber = 0;
    int placeValue = 1;

    while(temp > 0) {
        int rem = temp % 2;
        temp = temp / 2;
        binaryNumber += rem * placeValue;
        placeValue *= 10;
    }
    cout << "The binary number equivalent to " << decimalNumber << " will be : " << binaryNumber << endl;
}

