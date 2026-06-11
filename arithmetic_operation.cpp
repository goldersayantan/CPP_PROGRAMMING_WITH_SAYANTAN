#include <iostream>
using namespace std;
int main()  {
    float num1, num2;
    int choice;
    while(true)    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "-----Main Menu-----" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulation\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)  {
            case 1:
                cout << "The addition of " << num1 << " + " << num2 << " will be: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "The subtraction of " << num1 << " - " << num2 << " will be: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "The multiplication of " << num1 << " * " << num2 << " will be: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "The division of " << num1 << " / " << num2 << " will be: " << num1 / num2 << endl;
                break;
            case 5:
                cout << "The modulation of " << num1 << " % " << num2 << " will be: " << int(num1) % int(num2) << endl;
                break;
            case 6:
                cout << "Exitting..." << endl;
                exit(0);
            default:
                cout << "Invalid! Try again" << endl;
                break;
        };
    }
    return 0;
}