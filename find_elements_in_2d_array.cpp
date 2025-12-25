#include <iostream>
#include <vector>
using namespace std;

pair <int, int> find_element(vector<vector<int>> matrix, int r, int c, int target)  {
    for(int i = 0; i < r; i++)  {
        for(int j = 0; j < c; j++)  {
            if (matrix[i][j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()  {
    int r, c;
    cout << "Enter the number of rows in matrix: ";
    cin >> r;
    cout << "Enter the number of columns in matrix: ";
    cin >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i < r; i++)  {
        for(int j = 0; j < c; j++)  {
            cout << "Enter the element in [" << i << j << "] index: ";
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix will be: " << endl;
    for(int i = 0; i < r; i++)  {
        cout << "[";
        for(int j = 0; j < c; j++)  {
            cout << matrix[i][j];
        }
        cout << "]";
        cout << endl;
    }
    int target;
    cout << "Enter the target element to found: ";
    cin >> target;
    pair <int, int> result = find_element(matrix, r, c, target);
    if(result.first != -1)  {
        cout << "The element found on index: " << result.first << ", " << result.second << endl;
    }else   {
        cout << "The element not found.";
    }
    return 0;
}