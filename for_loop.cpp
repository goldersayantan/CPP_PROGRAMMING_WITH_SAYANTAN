// Printing number in a specific range
#include<iostream>
using namespace std;
int main()  {
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the stopping number : ";
    cin >> stop;
    for(int i = start; i <= stop; i++)  {
        cout << i << " "; 
    }
    return 0;
}
