#include <iostream>
using namespace std;
int main()  {
    // Specific Number Of Fibonacci Number
    int limit, temp1 = 0, temp2 = 1, backup1;
    cout << "Enter the limit of fibonacci numbers : ";
    cin >> limit;
    for(int i = 0; i < limit; i++) {
        cout << temp1 << ", ";
        backup1 = temp1;
        temp1 = temp1 + temp2;
        temp2 = backup1;
    }
    cout << endl;

    // Fibonacci Number In A Specific Range
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the ending number : ";
    cin >> stop;
    int temp3 = 0, temp4 = 1, backup2;
    while(temp3 < stop) {
        backup2 = temp3;
        temp3 = temp3 + temp4;
        temp4 = backup2;
        if((temp3 >= start) && (temp3 <= stop))  {
            cout << temp3 << ", ";
        }
    }
    return 0;
}

