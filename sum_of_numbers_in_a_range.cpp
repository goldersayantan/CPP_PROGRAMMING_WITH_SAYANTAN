#include <iostream>
using namespace std;
int main()  {
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the ending number : ";
    cin >> stop;
    int total = 0;
    for(int i = start; i <= stop; i++)  {
        total += i;
    }
    cout << "The sum of " << start << " from " << stop << " will be : " << total << endl;
    return 0;
}
