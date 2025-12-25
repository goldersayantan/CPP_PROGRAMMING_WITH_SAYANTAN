#include <iostream>
#include <vector>
using namespace std;

int diagonal_sum_2D(const vector<vector<int>>& matrix, int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += matrix[i][i];               
        total += matrix[i][n - 1 - i];       
    }
    if(n % 2 != 0) {
        int mid = n / 2;
        total -= matrix[mid][mid];
    }
    return total;
}


int main()  {
    int n;
    cout << "Enter the number of rows (Square Matrix): ";
    cin >> n;
    vector<vector <int>> matrix(n, vector <int> (n));
    for(int i = 0; i < n; i++)  {
        for(int j = 0; j < n; j++)  {
            cout << "Enter the element in [" << i << j << "] index: ";
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix will be: ";
    cout << "[";
    for(int i = 0; i < n; i++)  {
        cout << "[";
        for(int j = 0; j < n; j++)  {
            cout << matrix[i][j];
        }
        cout << "]";
    }
    cout << "]";
    int diagonal_sum = diagonal_sum_2D(matrix, n);
    cout << "Diagonal sum will be: " << diagonal_sum;
    return 0;
}
