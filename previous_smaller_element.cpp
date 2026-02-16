#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <int> previousSmallerElement(vector <int> arr)   {
    stack <int> st;
    vector <int> ans (arr.size());
    for(int i = 0; i < arr.size(); i++) {
        while(!st.empty() && arr[i] <= st.top())    {
            st.pop();
        }
        if(st.empty())  {
            ans[i] = -1;
        }else   {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}

void display(vector <int> arr)  {
    for(int i : arr)    {
        cout << i << " ";
    }
    cout << endl;
}

int main()  {
    vector <int> arr = {3, 1, 0, 8, 6};
    cout << "The original array was: ";
    display(arr);
    vector <int> ans = previousSmallerElement(arr);
    cout << "The array with previous smaller element will be: ";
    display(ans);
    return 0;
}