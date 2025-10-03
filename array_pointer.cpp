#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Address of arr[0]: " << &arr[0] << endl;
    cout << "Value of arr (array name): " << arr << endl;

    cout << "First element (arr[0]): " << arr[0] << endl;
    cout << "First element using pointer (*arr): " << *arr << endl;

    return 0;
}
