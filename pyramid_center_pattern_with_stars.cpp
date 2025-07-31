#include <iostream>
using namespace std;
int main()  {
    int rows;
    cout << "Enter the number of rows you want : ";
    cin >> rows;
    for(int i = 1; i <= rows; i++)  {
        for(int j = (rows - i); j > 0; j--) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}