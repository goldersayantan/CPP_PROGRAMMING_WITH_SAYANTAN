#include <iostream>
using namespace std;

int findFactorial(int num)  {
    int fact = 1;
    for(int i = num; i >= 1; i--)   {
        fact *= i;
    }
    return fact;
}

int calculatencr(int n, int r)  {
    double result = findFactorial(n) / (findFactorial(r) * findFactorial(n - r));
    return result;
}

int main()  {
    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    double result = calculatencr(n ,r);
    cout << "The ncr value will be : " << result << endl;
    return 0;
}
