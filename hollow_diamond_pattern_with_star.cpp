#include <iostream>
using namespace std;
int main()  {
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for(int i = 0; i < rows; i++)   {
        for(int j = 0; j < (rows - i - 1); j++)    {
            cout << " ";
        }
        cout << "*";
        if(i != 0)  {
            for(int k = 0; k < ((2 * i) - 1); k++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < rows - 1; i++)   {
        for(int j = 0; j < i + 1; j++)  {
            cout << " ";
        }
        cout << "*";
        if(i != rows - 2)   {
            for(int k = 0; k < 2*(rows- i) - 5; k++)    {
               cout << " "; 
            }
            cout << "*";
        }
        cout << endl;
    }
}

