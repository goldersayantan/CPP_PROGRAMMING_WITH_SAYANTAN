#include <iostream>
using namespace std;
int sumOfDigit(int num) {
    int total = 0;
    while(num > 0)  {
        int rem = num % 10;
        num = num / 10;
        total += rem;
    }
    return total;
}

int main()  {
    int num;
    cout << "Enter a number to find sum of digit : ";
    cin >> num;
    int result = sumOfDigit(num);
    cout << "The sum of digit in number " << num << " will be : " << result;
    return 0;
}

