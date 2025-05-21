#include <iostream>
using namespace std;
int main()  {
    // implicit
    char grade = 'A';
    int value = grade;
    cout << value << endl;

    int marks = 59;
    double num = marks;
    cout << num << endl;

    // explicit
    double price = 100.9;
    int newprice = (double) price;
    cout << newprice << endl;

}
