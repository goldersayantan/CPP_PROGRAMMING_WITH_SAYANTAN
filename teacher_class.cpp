#include <iostream>
#include <string>
using namespace std;

class Teacher   {
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept)   {
        dept = newDept;
    }
};

int main()  {
    Teacher t1;
    t1.name = "Alex";
    t1.dept = "CSE";
    t1.subject = "Programming";
    t1.salary = 100000;
    cout << t1.name << endl;
    cout << t1.dept << endl;
    
    return 0;
}