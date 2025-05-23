#include <iostream>
using namespace std;
int main()  {
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if ((marks > 100) || (marks < 0)) {
        cout << "Invalid Marks." << endl;
    }else if (marks >= 90)    {
        cout << "Grade is : A" << endl;
    }else if ((marks < 90) && (marks >= 80)) {
        cout << "Grade is : B" << endl;
    }else {
        cout << "Grade is : C" << endl;
    }
}
