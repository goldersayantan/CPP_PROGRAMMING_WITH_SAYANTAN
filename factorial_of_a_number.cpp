#include <iostream>
using namespace std;

int findFactorial(int num)  {
    int fact = 1;
    for(int i = num; i >= 1; i--)   {
        fact *= i;
    }
    return fact;
}

int main()  {
    int num;
    cout << "Enter the number to find factorial : ";
    cin >> num;
    int factorial = findFactorial(num);
    cout << "The factorial of " << num << " is : " << factorial;
}
