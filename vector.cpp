#include <iostream>
#include <vector>
using namespace std;

int main()  {
    vector <int> vec;
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(2);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(3);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(4);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(5);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(6);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vec.clear();
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;

    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.erase(v.begin() + 1); // removes element at index 1
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout << v.size() << endl;     
    cout << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    cout << v.size() << endl;  
    cout << v.capacity() << endl;;

    for(int val : v)    {
        cout << val << endl;
    }


    // cout << v.at(50); // safe
    // cout << v[50]; // unsafe

    return 0;
}