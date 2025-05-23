#include <iostream>
using namespace std;
int main()  {
    char letter;
    cout << "Enter a character : ";
    cin >> letter;
    int value = (int) letter;
    if ((value >= 65) && (value <= 90)) {
        cout << "The" << letter << "is a uppercase character." << endl;
    }else if ((value >= 97) && (value <= 122))  {
        cout << "The" << letter << "is a lowercase character." << endl;
    }else   {
        cout << "Invalid Character.";
    }
}
