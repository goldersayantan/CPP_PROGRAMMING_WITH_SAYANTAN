#include <iostream>
using namespace std;
int main()  {
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    for(int i = 0; i < rows; i++)   {
        for(int j = (rows - i - 1); j > 0; j--) {
            cout << " ";
        }
        for(int k = 1; k <= (i + 1); k++)  {
            cout << k;
        }
        for(int l = i; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}

