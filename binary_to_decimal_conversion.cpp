#include <iostream>
#include <math.h>
using namespace std;

int main()  {
    int bin_num;
    cout << "Enter the binary number : ";
    cin >> bin_num;
    int temp = bin_num;
    int dec_num = 0;
    int count = 0;
    while(temp > 0) {
        int rem = temp % 10;
        temp = temp / 10;
        dec_num += rem * pow(2, count);
        count++;
    }
    cout << "The decimal number equivalent to " << bin_num << " will be : " << dec_num << endl;
    return 0;
}

