#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void next_greater_element1(vector <int>& arr, vector <int>& ans) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i; j < arr.size(); j++) {
            if(arr[i] < arr[j]) {
                ans[i] = arr[j];
                break;
            }
        }
    }
}

void next_greater_element2(vector <int>& arr, vector <int>& ans) {
    stack <int> st;
    for(int i = arr.size() - 1; i >= 0; i--)    {
        while(!st.empty() && arr[i] >= st.top()) {  // Checking until stack gets empty and st.top() is less tahn arr[i]
            st.pop();
        }
        if(!st.empty() && arr[i] < st.top())    {  // If stack is not empty and top of the stack is greater
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
}

void display(vector <int> arr)  {
    for(int i : arr)    {
        cout << i << " ";
    }
    cout << endl;
}

int main()  {
    vector <int> arr = {5, 3, 6, 8, 2, 7, 0};
    vector <int> ans (arr.size(), -1);
    cout << "The original array is: ";
    display(arr);
    next_greater_element2(arr, ans);
    cout << "The array with next greater element will be: ";
    display(ans);
    return 0;
}