#include <iostream>
using namespace std;

class Teacher   {
public:
    string name;
    string dept;
    string subject;
    int salary;

    Teacher(string name, string dept, string subject, int salary)   {
        this -> name = name;
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }

    Teacher(Teacher &orgObj)  {
        cout << "Copy Constructor called" << endl;
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    }

    void getInfo()  {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl; 
    }
};

int main()  {
    Teacher t1("Alex", "CSE", "Computer Science", 25000);
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}