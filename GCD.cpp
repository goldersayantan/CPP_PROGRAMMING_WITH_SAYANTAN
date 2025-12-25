#include <iostream>
using namespace std;

int gcd_of_two_numbers(int num1, int num2)    {
    if(num1 == 0)   {
        return num2;
    }
    if(num2 == 0)   {
        return num1;
    }
    if(num1 >= num2)    {
        gcd_of_two_numbers(num1 % num2, num2);
    }else   {
        gcd_of_two_numbers(num1, num2 % num1);
    }
}

int main()  {
    int result = gcd_of_two_numbers(20, 28);
    cout << result;
}