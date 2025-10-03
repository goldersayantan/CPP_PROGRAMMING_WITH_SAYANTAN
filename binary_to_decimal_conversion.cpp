#include <iostream>
#include <math.h>
using namespace std;

bool isBinary(int num)  {
    while(num != 0) {
        int digit = num % 10;
        if((digit != 0) && (digit != 1))    {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()  {
    int bin_num;
    cout << "Enter the binary number : ";
    cin >> bin_num;
    int temp = bin_num;
    int dec_num = 0, count = 0;
    if(isBinary(bin_num))   {
        while(temp != 0)    {
            int rem = temp % 10;
            dec_num += rem * pow(2, count);
            temp /= 10;
            count++;
        }
        cout << "The decimal number equivalent to binary number " << bin_num << " will be : " << dec_num << endl;
    }else   {
        cout << "This number " << bin_num << " is not an binary number." << endl;
    }
}