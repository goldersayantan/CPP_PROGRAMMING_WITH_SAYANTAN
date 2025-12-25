#include <iostream>
using namespace std;
int main()  {
    int r, c;
    cout << "Enter the number of rows in the matrix: ";
    cin >> r;
    cout << "Enter the number of columns int he matrix: ";
    cin >> c;
    int matrix[r][c];
    for(int i = 0; i < r; i++)  {
        for(int j = 0; j < c; j++)  {
            int element;
            cout << "Enter element on [" << i << j << "] index: ";
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < r; i++)  {
        cout << "[";
        for(int j = 0; j < c; j++)  {
            cout << matrix[i][j];
        }
        cout << "]";
    }
    return 0;
}