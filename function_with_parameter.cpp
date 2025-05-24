// Calculate the sum of numbers in a specific range.
#include <iostream>
using namespace std;

int sum_of_numbers_in_a_range(int num1, int num2)   {
    int total = 0;
    if(num1 > num2) {
        for(int i = num2; i <= num1; i++)   {
            total += i;
        }
        return total;
    }else   {
        for(int j = num1; j <= num2; j++)   {
            total += j;
        }
        return total;
    }
}

int main()  {
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    int sum = sum_of_numbers_in_a_range(num1, num2);
    cout << "The sum of numbers from " << num1 << " to " << num2 << " will be : " << sum;
    return 0;
}
