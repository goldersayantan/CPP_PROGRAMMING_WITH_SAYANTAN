#include <iostream>
using namespace std;
int main()  {
    int start, stop;
    cout << "Enter the starting number : ";
    cin >> start;
    cout << "Enter the ending number : ";
    cin >> stop;
    cout << "The numbers divisible by 3 will be : ";
    for(int i = start; i <= stop; i++)  {
        if(i % 3 == 0)  {
            cout << i << " ";
        }
    }
    return 0;
}
