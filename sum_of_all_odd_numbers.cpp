#include <iostream>
using namespace std;
int main()  {
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the stopping number: ";
    cin >> stop;
    int total = 0;
    for (int i = start; i <= stop; i++) {
        if (i % 2 != 0) {
            total += i;
        }
    }
    cout << "The sum of odd numbers from " << start << " to " << stop << " will be : " << total << endl;
    return 0;
}
