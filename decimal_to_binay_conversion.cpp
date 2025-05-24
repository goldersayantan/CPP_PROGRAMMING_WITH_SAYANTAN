#include <iostream>
#include <math.h>
using namespace std;

int main()  {
    int dec_num;
    cout << "Enter the decimal number : ";
    cin >> dec_num;
    int temp = dec_num;
    int bin_num = 0;
    int count = 0;
    while(temp > 0)  {
        int rem = temp % 2;
        temp = temp / 2;
        bin_num += rem * pow(10 , count);
        count++;
    }
    cout << "The binary number equivalent to " << dec_num << " will be : " << bin_num;
    return 0;
}

