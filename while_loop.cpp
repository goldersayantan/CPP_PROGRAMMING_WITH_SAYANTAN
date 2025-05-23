// Printing number in a specific range
#include <iostream>
using namespace std;
int main()  {
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the ending number : ";
    cin >> stop;
    int count = start;
    while(count <= stop)    {
        cout << count << " ";
        count++;
    }
}

