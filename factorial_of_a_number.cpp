#include <iostream>
using namespace std;
int main()  {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int fact = 1;
    for(int i = num; i >= 1; i--)   {
        fact *= i;
    }
    cout << "The factorial of " << num << " is : " << fact << endl;
}
