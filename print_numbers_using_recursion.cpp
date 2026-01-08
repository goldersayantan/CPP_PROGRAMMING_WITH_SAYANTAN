#include <iostream>
using namespace std;

int printNums(int num)  {
    if(num == 0)    {
        cout << num << endl;
    }else   {
        cout << num << endl;
        printNums(num - 1);
    }
}

int main()  {
    printNums(5);
}