#include <iostream>
using namespace std;
int main()  {
    int rows;
    cout << "Enter the numebr of rows : ";
    cin >> rows;
    int count = 1;
    for(int i = 1; i <= rows; i++)  {
        for(int j = 1; j <= rows; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
