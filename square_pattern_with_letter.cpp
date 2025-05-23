#include <iostream>
using namespace std;
int main()  {
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    char ch = 64;
    for(int i = 1; i <= rows; i++)  {
        for(int j = 1; j <= rows; j++)  {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
